-- MLT = require("mlt")
-- MLT.Factory_init()
-- MLTProfile = MLT.Profile()

--[[ FFI stuff... ]]
local FFI = require("ffi")

FFI.cdef[[

typedef struct {int red, green, blue;} Color;

void flush(char* dst, Color fill, int w, int h);

void setData_24(char* dst, char* src, int w, int h);

void setData_32(char* dst, char* src, int w, int h);

void avUnwrapFrame(char* dst, char* src, int wrap, int w, int h);

]]

imageDataExtra = FFI.load( "ffi/imageDataExtra.so" )

avInit()

--[[ VideoStream is just a loose wrapper for ffmpeg.
	The video stream provides video and audio at
	request, and can also be used to                ]]
	--this comment is no longer entirely accurate... ;P

VideoStream = {}
VideoStream.__index = VideoStream
function VideoStream.make( path,width,height )
	local s = {}
	setmetatable(s, VideoStream)

	----
	-- s.color = 	{string.char(math.random(0,255)),
	-- 			string.char(math.random(0,255)),
	-- 			string.char(math.random(0,255))}
	s.color = FFI.new("Color", math.random(0,255),
								math.random(0,255),
								math.random(0,255))
	----

	s.path = path
	s.stream = path and avVideo.make(path)
	s.width,s.height = width or profile.width, height or profile.height
	s.data = love.image.newImageData(s.width,s.height)

	if path then
		local f = s.stream:getFrame()
		s.width,s.height = s.stream.width or s.width, s.stream.height or s.height
		-- print('e', FFI.sizeof(f), f)
		-- print('f',tonumber(s.stream.frame.linesize[0]))
		s.data = love.image.newImageData(profile.width,profile.height)
		-- imageDataExtra.avUnwrapFrame(s.data:getPointer(), f, tonumber(s.stream.frame.linesize[0]), profile.width, profile.height)
		imageDataExtra.setData_24(s.data:getPointer(), f , profile.width, profile.height)
		-- imageDataExtra.setData_32(s.data:getPointer(), f , s.width, s.height)
		-- print('g')
		s.length = s.stream:getDuration()
	end
	s.image = love.graphics.newImage(s.data)

	return s
end

-- --[[ Grab a frame from the video at a specified time.
-- 	This function may be slow if called repeatedly.  ]]

function VideoStream:getData()
	-- local data = love.image.newImageData(w,_h or w)
	-- imageDataExtra.flush(data:getPointer(), self.color, w, _h or w)

	if self.stream then
		return self.stream:getFrame()
	end

	return self.data:getPointer()
end

function VideoStream:getThumbnail(w,h)

	local data = love.image.newImageData(w,h or w)
	imageDataExtra.flush(data:getPointer(), self.color, w, h or w)
	return love.graphics.newImage(data)

end

-- --[[ Get access to the video stream ]]
VideoStream.Stream = {}
VideoStream.Stream.__index = VideoStream.Stream

function VideoStream:getStream()
	if not self.stream then return nil end
	local s = {}
	setmetatable(s, VideoStream.Stream)
	s.source = self
	s.time = 0
	s.position = 0
	s.fps = self.stream:getFramerate()
	s.maxFrame = nil
	s.length = self.length

	return s
end

	--[[ Stream is to VideoStream as Reference is to Clip ]]
	VideoStream.Stream.next = function (self)
		self.position = self.position + 1
		-- check source cache for next location. if it isn't there, load it and the next few frames as well
		return self.source.data:getPointer()
		-- return --next frame
	end

	VideoStream.Stream.current = function (self)
		-- check source cache for current location. if it isn't there, load it and the next few frames as well
		return self.source.data:getPointer()
		-- return -- this frame
	end


--[[ The clip holds a video and the info related
	to that video. The clip does not go into the
	timeline, it is just a container for the media.
	For an editable "clip" check out References. ]]

Clip = {}
Clip.__index = Clip

function Clip.make(path)
	local c = {}
	setmetatable(c, Clip)

	if path then
		c.path = path
			--should check if exists but w/e
		c.videoStream = VideoStream.make(path,c.width,c.height)
	-- c.info = {}
	-- c.info.metadata = {}
	-- c.info.stream = {}

		c.position = 0
		c.length = c.videoStream.length
		print(c.length)
		c.framerate = c.videoStream.framerate
	-- c.name = nil
	-- c.width = nil
	-- c.height = nil

		c.thumb = nil
	end

	c.references = {}

	-- c:refresh()


	-- videoLoadChannel:push(path)
	-- love.timer.sleep(.01)

	-- c.cacheFile = io.open("/tmp/katana/"..toHash(path)..".cch")

	return c
end

function Clip.__len(c)
	print('kllopp',c.length)
	return c.length or 0
end

function Clip:setThumbnail()
	-- local thumb = self.videoStream:getThumbnail(100,100)
	-- local frame = love.graphics.newImageData(100,100)
	-- imageDataExtra.setData_24(frame,thumb,100,100)
	-- self.thumb = love.graphics.newImage(frame)
	self.thumb = self.videoStream:getThumbnail(100,100)
end

function Clip:getData(location,duration)
	-- return self.videoStream:getStream(location or 0, duration or self.length, self.width,self.height)
	-- return self.cacheFile
	return self.videoStream:getData()
end

function Clip:getFramerate()
	return self.framerate
end

function Clip:getPosition()
	return self.position
end

--[[ Creates a new reference to a clip. Valid
	types are: video/audio, video, audio, photo. ]]

function Clip:newReference(type)
	self.references[#self.references+1] = Reference.make(self,type or "video",#self.references+1)
	return self.references[#self.references]
end

Reference = {}
Reference.__index = Reference

function Reference.make(clip,type,index)
	local r = {}
	setmetatable(r, Reference)

	--[[ Start and end are the in and out points relative to the clip ]]
	r.start = 0
	r._end = 0 + clip.length

	--[[ In and out are the in and out points relative to the project ]]
	r._in = 0
	r.out = 0

	r.length  = clip.length
	r.effects = {}
	r.transitions = {}
	r.label = clip.path
	r.type = type
	r.clip = clip
	r.index = index 		-- Index in the clip's references
	r.thumb = clip.thumb

	return r
end

function Reference:getData(position)
	return self.clip.videoStream:getFrame()
end

function Reference:setStartPoint(position)
	local stamp = tostring(position)

	self.start = math.max(tonumber(stamp), 0)
	self.length = self._end - self.start
end

function Reference:setEndPoint(position)
	local stamp = tostring(position)

	self._end = math.min(tonumber(stamp), self.clip.length)
	self.length = self._end - self.start
end

function Reference:setInPoint(position)
	local stamp = tostring(position)

	self._in = math.max(tonumber(stamp), 0)
	self.out = self._in + self.length
end

function Reference:move(distance)
	local stamp = tostring(distance)

	-- self._in = self._in + tonumber(stamp)
	self._in = self._in + distance
	self.out = self._in + self.length
end

function Reference:rename(label)
	self.label = label
	-- also must update all references to this label
end

function Reference:resize(length)
	self.length = length
	self.out = self._in + length
end

function Reference:cut(position)
	self._end = position
	self.length = position - self.start
	self.out = self._in + self.length

	local n = self.clip:newReference(self.type)
	n:setStartPoint(self._end)
	n:setInPoint(self.out)
	return n
end

--[[ This is necessary to make sure the Clip has
	an updated list of references.              ]]

function Reference:delete()
	table.remove(self.clip.references, self.index)
	self = nil
end

Video = {}
Video.VideoStream = VideoStream
Video.Clip = Clip
Video.Reference = Reference

return Video

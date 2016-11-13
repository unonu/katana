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

]]

imageDataExtra = FFI.load( "ffi/imageDataExtra.so" )

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
	s.stream = nil
	s.width,s.height = width or profile.width, height or profile.height
	s.data = love.image.newImageData(s.width,s.height)
	-- s.data:setData(s.color:rep(s.width*s.height))
	-- imageDataExtra.flush(s.data:getPointer(), FFI.cast("char",s.color[1]) , s.width, s.height)
	imageDataExtra.flush(s.data:getPointer(), s.color , s.width, s.height)
	s.image = love.graphics.newImage(s.data)

	return s
end

-- function VideoStream.make(path,width,height)
-- 	local s = {}
-- 	setmetatable(s, VideoStream)
-- 	s.path = path
-- 	s.stream = nil
-- 	print("VS make",path,MLTProfile)
-- 	s.producer = MLT.Producer( MLTProfile, path )
-- 	--[[audio consumer needed ]]
-- 	s.width,s.height = width or 640, height or 480
-- 	s.data = love.image.newImageData(s.width,s.height)
-- 	s.image = love.graphics.newImage(s.data)

-- 	print(mlt_image_rgb24,MLT.mlt_image_rgb24,mlt.mlt_image_rgb24)
-- 	s.data:setData(s.producer:get_frame():get_image( 1, 128,128 ))
-- 	s.image:refresh()

-- 	return s
-- end

-- --[[ Grab a frame from the video at a specified time.
-- 	This function may be slow if called repeatedly.  ]]

function VideoStream:getFrame( location,w,_h )
	local stamp = tostring(location)
	local data = love.image.newImageData(w,_h)
	-- data:setData(self.color:rep(w*(_h or w)))
	-- imageDataExtra.flush(data:getPointer(), FFI.cast("char",self.color[1]), w, _h or w)
	imageDataExtra.flush(data:getPointer(), self.color, w, _h or w)

	return love.graphics.newImage(data)
end
-- function VideoStream:getFrame(location,w,_h)
-- 	-- local stamp = tostring(location)
-- 	-- print("called $getFrame",location,f,s,m,h,stamp)

-- 	-- -- self.stream = io.popen( "ffmpeg -loglevel fatal"..
-- 	-- -- 						" -ss "..stamp..
-- 	-- -- 						" -i \""..self.path..'\"'..
-- 	-- -- 						" -s "..(w or self.width)..'x'..(_h or self.height)..
-- 	-- -- 						" -f image2pipe -pix_fmt rgb24 -vcodec rawvideo -t 1 -")

-- 	-- -- self.stream:setvbuf("full",(w or self.width)*(_h or self.height)*3)
-- 	-- -- local data = love.image.newImageData(w,_h)
-- 	-- -- local raw = self.stream:read((w or self.width)*(_h or self.height)*3)
-- 	-- -- print("thumb from",stamp)
-- 	-- -- data:setData(raw)
-- 	-- -- self.stream:flush()
-- 	-- -- self.stream:close()
-- 	-- -- self.stream = nil
-- 	-- local data = self.producer:getFrame()

-- 	-- return love.graphics.newImage(data)
-- 	local mltFrame = self.producer:getFrame()
-- 	return mltFrame:getImage(MLT.mlt_image_rgb24)
-- end

-- --[[ Get access to the video stream ]]
VideoStream.Stream = {}
VideoStream.Stream.__index = VideoStream.Stream

function VideoStream:getStream()
	local s = {}
	setmetatable(s, VideoStream.Stream)
	s.position = 0
	s.source = self
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
-- function VideoStream:getStream(location,length,w,h)
-- 	-- local stamp = 	tostring(location)
-- 	-- local duration = tostring(length)

-- 	-- -- self.stream = io.popen( "ffmpeg -loglevel fatal"..
-- 	-- -- 						" -ss "..stamp..
-- 	-- -- 						" -i \""..self.path..'\"'..
-- 	-- -- 						" -s "..(w or self.width)..'x'..(h or self.height)..
-- 	-- -- 						-- " -to "..duration..
-- 	-- -- 						" -f image2pipe -pix_fmt rgb24 -vcodec rawvideo -")
-- 	-- self.stream:setvbuf("full",(w or self.width)*(h or self.height)*3)
-- 	-- return self.stream
-- end

-- --[[ Properly close the video stream ]]

-- function VideoStream:closeStream()
-- 	-- self.stream:close()
-- end


--[[ The clip holds a video and the info related
	to that video. The clip does not go into the
	timeline, it is just a container for the media.
	For an editable "clip" check out References. ]]

Clip = {}
Clip.__index = Clip

function Clip.make(path)
	local c = {}
	setmetatable(c, Clip)

	c.path = path
	-- c.info = {}
	-- c.info.metadata = {}
	-- c.info.stream = {}

	c.length = 25
	-- c.fps = nil
	-- c.name = nil
	-- c.width = nil
	-- c.height = nil

	c.thumb = nil

	c.references = {}

	-- c:refresh()

		--should check if exists but w/e
	c.videoStream = VideoStream.make(path,c.width,c.height)

	-- videoLoadChannel:push(path)
	-- love.timer.sleep(.01)

	-- c.cacheFile = io.open("/tmp/katana/"..toHash(path)..".cch")

	return c
end

function Clip:setThumbnail()
	local frame = self.videoStream:getFrame()
	frame = love.graphics.newImageData(frame)
	self.thumb = love.graphics.newImage(frame)
end

function Clip:getStream(location,duration)
	-- return self.videoStream:getStream(location or 0, duration or self.length, self.width,self.height)
	-- return self.cacheFile
	return self.videoStream:getStream()
end

function Clip:refresh()
	--[[ Here, the info for the video file is parsed. ]]

	-- local stream = {io.popen( "ffprobe -hide_banner -pretty -print_format csv \""..self.path..'\" 2>&1' ),true}

	-- stream[2] = stream[1]:read("*l")
	-- while (stream[2]) do
	-- 	local key, value = stream[2]:match( "%s*([%w_]*)[%p%s]-(.*)" )
	-- 	print("match",key,value)
	-- 	if key == "Stream" then
	-- 		local s, c = value:match("#(%d+):(%d+)")
	-- 		print(s,c,value)
	-- 		if not self.info.stream[tonumber(s)] then
	-- 			self.info.stream[tonumber(s)] = {} end
	-- 		self.info.stream[tonumber(s)][tonumber(c)] = {value:match( "#%d+:%d+: (%w+):.*" )}
	-- 		local width,height = value:match(", (%d+)x(%d+),-")
	-- 		if tonumber(width or 0) > (self.width or 0) then
	-- 			self.width, self.height = tonumber(width), tonumber(height) end
	-- 		self.fps = tonumber( value:match("([%d%.]+) fps") ) or self.fps or profile.fps
	-- 		print("width,height",self.width,self.height)
	-- 		print(self.fps)
	-- 	elseif key == "Duration" then
	-- 		local h,m,s = value:match("(%d*):(%d*):([%d%.]*)")
	-- 		self.length = tonumber(h)*360 + tonumber(m)*60 + tonumber(s)

	-- 	end
	-- 	stream[2] = stream[1]:read("*l")
	-- end

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
	r.thumb = clip.videoStream:getFrame(clip.length*.5,48,48)

	return r
end

function Reference:setStartPoint(location)
	local stamp = 	tostring(location)

	self.start = math.max(tonumber(stamp), 0)
	self.length = self._end - self.start
end

function Reference:setEndPoint(location)
	local stamp = 	tostring(location)

	self._end = math.min(tonumber(stamp), self.clip.length)
	self.length = self._end - self.start
end

function Reference:setInPoint(location)
	local stamp = 	tostring(location)

	self._in = math.max(tonumber(stamp), 0)
	self.out = self._in + self.length
end

function Reference:move(distance)
	local stamp = 	tostring(distance)

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

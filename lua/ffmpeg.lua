local FFI = require("ffi")

local avcodec = FFI.load('avcodec-ffmpeg')
local avformat = FFI.load('avformat-ffmpeg')
local avutil = FFI.load('avutil-ffmpeg')
local header = io.open('ffi/ffmpeg.h'):read('*a')
FFI.cdef(header)

function avAssert(err)
	if err < 0 then
		local errbuf = FFI.new("uint8_t[256]")
		local ret = avutil.av_strerror(err, errbuf, 256)
		if ret ~= -1 then
			error(FFI.string(errbuf), 2)
		else
			error('Unknown AV error: '..tostring(ret), 2)
		end
	end
	return err
end

function avInit()
	-- avcodec.avcodec_init()
	avcodec.avcodec_register_all()
	avformat.av_register_all()
end

-- "Opening file"
function avOpen(filename)
	local pinputContext = FFI.new("AVFormatContext*[1]")
	if not filename then error() end
	avAssert(avformat.avformat_open_input(pinputContext, filename, nil, nil))
	local context = pinputContext[0]

	avAssert(avformat.avformat_find_stream_info(context, nil))
	return context
end

function rational2number(r)
	return r.num/r.den
end


avVideo = {}
avVideo.__index = avVideo

function avVideo.make(filename)
	local av = {}
	setmetatable(av, avVideo)
	av.path = filename
	av.context = avOpen(filename)
	-- local filetype = filename:match('%..-$')
	-- av.codec = avcodec.avcodec_find_decoder_by_name
	-- vvv needs to be updated if the stream changes

	-- find the video and audio stream
	av.videoStream = nil
	av.videoContext = nil
	av.audioStream = nil
	av.audioContext = nil
	av.streams = {}
	for i=1, tonumber(av.context.nb_streams) do
		local stream = av.context.streams[i-1]
		local context = stream.codec
		if context.codec_type == FFI.C.AVMEDIA_TYPE_VIDEO then
			local codec = avcodec.avcodec_find_decoder(context.codec_id)
			avAssert(avcodec.avcodec_open2(context, codec, nil))
			av.videoContext = context
			av.videoStream = i
			av.numFrames = stream.nb_frames
			av.framerate = rational2number(stream.avg_frame_rate)
			-- duration in seconds
			av.duration = stream.duration * rational2number(stream.time_base)
			av.width = context.width
			av.height = context.height
			
		end
		if context.codec_type == FFI.C.AVMEDIA_TYPE_AUDIO then
			local codec = avcodec.avcodec_find_decoder(context.codec_id)
			avAssert(avcodec.avcodec_open(context, codec))
			av.audioContext = context
			av.audioStream = i
		end
		av.streams[i] = stream
	end


	-- should check if it opened
	-- av.file = io.open(filename,'rb')
	-- reusable stuff so might contain garbage
	av.packet = FFI.new("AVPacket")
	av.frame = avcodec.av_frame_alloc()
	av.gotFrame = FFI.new("int[1]")
	av.frameSize = av.videoContext.width * av.videoContext.height
	-- 16 bpp? idk fix this later
	-- av.buffer = FFI.new("int16_t[?]",av.frameSize[0] * 3)

	return av
end

function avVideo:getFrame()
	print('a')

	-- need to implement this loop

	local len = avAssert(avformat.av_read_frame(self.context, self.packet))
	print('b',self.videoContext,self.frame,self.gotFrame[0],self.packet)
	local n = avcodec.avcodec_decode_video2(self.videoContext,self.frame,self.gotFrame,self.packet)
	print('c', self.gotFrame[0])

	-- error check
	if n == -1 then return
	elseif n < 0 then avAssert(n) end
	print('d')

	return self.frame.data[0]
end

function avVideo:getWidth()
	return self.width
end

function avVideo:getHeight()
	return self.height
end

function avVideo:getFrameCount()
	return self.numFrames
end

function avVideo:getDuration()
	return self.duration
end

-- should adapt for variable framerates
function avVideo:getFPS()
	return self.framerate
end



-- "Finding audio stream"

	-- local audioCtx
	-- local nStreams = tonumber(inputContext.nb_streams)
	-- for i=1,nStreams do
	-- 	local stream = inputContext.streams[i-1]
	-- 	local ctx = stream.codec
	-- 	if ctx.codec_type == FFI.C.AVMEDIA_TYPE_AUDIO then
	-- 		local codec = avcodec.avcodec_find_decoder(ctx.codec_id)
	-- 		avAssert(avcodec.avcodec_open(ctx, codec))
	-- 		audioCtx = ctx
	-- 	end
	-- end
	-- if not audioCtx then error('Unable to find audio stream') end

	-- print("Bitrate:", tonumber(audioCtx.bit_rate))
	-- print("Channels:", tonumber(audioCtx.channels))
	-- print("Sample rate:", tonumber(audioCtx.sample_rate))
	-- print("Sample type:", ({[0]="u8", "s16", "s32", "flt", "dbl"})[audioCtx.sample_fmt])

-- "Decoding"

	-- local AVCODEC_MAX_AUDIO_FRAME_SIZE = 192000

	-- local packet = FFI.new("AVPacket")
	-- local temp_frame = FFI.new("int16_t[?]", AVCODEC_MAX_AUDIO_FRAME_SIZE)
	-- local frame_size = FFI.new("int[1]")

	-- local all_samples = {}
	-- local total_samples = 0

	-- while tonumber(avformat.url_feof(inputContext.pb)) == 0 do
	-- 	local ret = avAssert(avformat.av_read_frame(inputContext, packet))

	-- 	frame_size[0] = AVCODEC_MAX_AUDIO_FRAME_SIZE
	-- 	local n = avcodec.avcodec_decode_audio3(audioCtx, temp_frame, frame_size, packet)
	-- 	if n == -1 then break
	-- 	elseif n < 0 then avAssert(n) end

	-- 	local size = tonumber(frame_size[0])/2 -- frame_size is in bytes
	-- 	local frame = FFI.new("int16_t[?]", size)
	-- 	FFI.copy(frame, temp_frame, size*2)
	-- 	all_samples[#all_samples + 1] = frame
	-- 	total_samples = total_samples + size
	-- end

-- "Merging samples"

	-- local samples = FFI.new("int16_t[?]", total_samples)
	-- local offset = 0
	-- for _,s in ipairs(all_samples) do
	-- 	local size = FFI.sizeof(s)
	-- 	FFI.copy(samples + offset, s, size)
	-- 	offset = offset + size/2
	-- end

-- "Processing"

-- The `samples` array is now ready for some processing! :)

-- ... like writing it raw to a file

	-- local out = assert(io.open('samples.raw', 'wb'))
	-- local size = FFI.sizeof(samples)
	-- out:write(FFI.string(samples, size))
	-- out:close()
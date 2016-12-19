do

if not os.execute("dir /tmp/katana") or not os.execute("mkdir /tmp/katana") then return end

print('asdfa')

videoName = love.thread.getChannel("videoLoadChannel")
quit = love.thread.getChannel("videoLoadControl")

local path
getName = function () path = videoName:pop() return path end 

toHash = function (s)
	print("\nhash\n",s)
	local clip = s:sub(-8,-1)
	clip = ('x'):rep(math.max(0,8-#clip))..clip
	return (clip:sub(1,1)..
				clip:sub(8,8)..
				clip:sub(2,2)..
				clip:sub(7,7)..
				clip:sub(3,3)..
				clip:sub(6,6)..
				clip:sub(4,4)..
				clip:sub(5,5)):gsub("[%.%s]","_")
end

while not quit:pop() do
	while getName() do
		local hash = toHash(path)
		print("\nHeeetyyyy\n")
		local stream,e = os.execute( "ffmpeg -loglevel fatal"..
							" -i \""..path..'\"'..
							" -f image2pipe -pix_fmt rgb24 -vcodec rawvideo - > /tmp/katana/"..hash..".cch")
		if stream then
			print("finished loading file.",hash)
		else
			print("failed to load file.",hash,e)
		end
	end
end

end
Frame = {}
Frame.__index = Frame

Frame.POP = 1
Frame.POPALL = 2

function Frame.make(layout)
	local f = {}
	setmetatable(f, Frame)

	f.layout = layout or "vertical"
	f.resizable = false

	f.width = nil
	f.height = nil
	f.x,f.y = 0, 0
	f.transformStack = {}

	f.elements = {}
	f.allowance = {}
	f.dividers = {}
	f.index = 0

	f.canFocus = true
	f.focused = false

	return f
end

function Frame:getWidth()
	return self.width end

function Frame:getHeight()
	return self.height end

function Frame:addElement(element)
	element.parent = self
	element.index = #self.elements+1
	self.elements[#self.elements+1] = element

	if self.layout == "vertical" then
		local oy = 0
		for i,e in ipairs(self.elements) do
			e.x = self.x
			e.y = self.y + oy
			if i == #self.elements then
				e:setSize(self.width, self.height - oy)
			else
				e:setSize(self.width, math.floor(self.height/#self.elements))
			end
			oy = oy + e.height
			self.dividers[i] = oy
		end
	else
		local ox = 0
		for i,e in ipairs(self.elements) do
			e.x = self.x + ox
			e.y = self.y
			if i == #self.elements then
				e:setSize(self.width - ox,self.height)
			else
				e:setSize(math.floor(self.width/#self.elements),self.height)
			end
			ox = ox + e.width
			self.dividers[i] = ox
		end
	end
end

function Frame:setSize(width,height,push,pop)

	local _width, _height = self.width, self.height
	if (push == nil or push) and (_width and _height) then
		self:pushTransformation()
	end
	if pop then
		self:popTransformation( pop == self.POPALL  )
	end
	self.width, self.height = width, height

	if self.layout == "vertical" then
		self.height = math.max(24*#self.elements,self.height)
		local oy = 0
		for i,e in ipairs(self.elements) do
			e.x = self.x
			e.y = self.y + oy
			e:setSize( self.width, math.max(24,math.round((e.height/_height) * self.height)))
			oy = oy + e.height
			self.dividers[i] = oy
		end
	else
		self.width = math.max(24*#self.elements,self.width)
		local ox = 0
		for i,e in ipairs(self.elements) do
			e.x = self.x + ox
			e.y = self.y
			e:setSize( math.max(24,math.round((e.width/_width) * self.width)), self.height)
			ox = ox + e.width
			self.dividers[i] = ox
		end
	end
end

function Frame:pushTransformation()
	self.transformStack[#self.transformStack+1] = {self.width,self.height}
end

function Frame:popTransformation(all)
	if #self.transformStack == 0 then
		return
	end

	if all then
		self.transformStack = {self.transformStack[self.transformStack[1]]}
	end

	_w,_h = unpack(self.transformStack[#self.transformStack])
	print(_w,_h)
	self.transformStack[#self.transformStack] = nil
	self:setSize(_w,_h,false,POP)
end

function Frame:update(dt,x,y)

	--[[ mx and my are the properly offset
		mouse coodrdinates.               ]]

	local mx, my = mouseTable.x,mouseTable.y
	mx, my = mx - (x or 0), my - (y or 0)

	--[[ A frame is "focused" if the mouse is on top]]

	if mx > 0 and mx < self.width and
		my > 0 and my < self.height then
		self.focused = self.canFocus
		states[windowState].focused = self
	else
		self.focused = false
	end

	--[[ Here, all of the children widgets are
		iterated through, and updated. x and y
		are variables to tell the widget how
		offset it is. Dividers are also updated
		here.                                  ]]

	self.dividers.highlighted = nil
	if self.layout == "vertical" then
		local oy = 0
		for i,e in ipairs(self.elements) do
			if 	i < #self.elements and
				my >= self.dividers[i] - 2 and
				my <= self.dividers[i] + 3  and
				mx >= 0 and mx <= self.width then
					self.dividers.highlighted = i
					cursorRequest = "sizens"
			end
			if self.dividers.grabbed then
				e.x = self.x
				e.y = self.y + oy
				e:setSize(self.width,self.dividers[i] - (self.dividers[i-1] or 0), false) --[[ Allow realtime resize ]]
			end
			e:update(dt,x,oy+y)
			oy = oy + e.height
		end
		local g = self.dividers.grabbed
		if g then
			self.dividers[g] = math.min(math.max(my,(self.dividers[g-1] or 0)+24),
											(self.dividers[g+1] or self.height)-24)
		end
	else
		local ox = 0
		for i,e in ipairs(self.elements) do
			if 	i < #self.elements and
				mx >= self.dividers[i] - 2 and
				mx <= self.dividers[i] + 3 and
				my >= 0 and my <= self.height then
					self.dividers.highlighted = i
					cursorRequest = "sizewe"
			end
			if self.dividers.grabbed then
				e.x = self.x + ox
				e.y = self.y
				e:setSize(self.dividers[i] - (self.dividers[i-1] or 0),self.height, false) --[[ Allow realtime resize ]]
			end
			e:update(dt,ox+x,y)
			ox = ox + e.width
		end
		local g = self.dividers.grabbed
		if g then
			self.dividers[g] = math.min(math.max(mx,(self.dividers[g-1] or 0)+24),
											(self.dividers[g+1] or self.width)-24)
		end
	end
end

function Frame:draw(expand)
	if self.layout == "vertical" then
		local oy = 0
		for i,e in ipairs(self.elements) do
			love.graphics.translate(0,oy)
			e:draw()
			love.graphics.translate(0,-oy)
			oy = oy + e.height
			if self.resizable and i < #self.elements then
				love.graphics.setColor(colors.scrollbar)
				love.graphics.line(0,self.dividers[i]-1,
								self.width,self.dividers[i]-1)
			end
		end
	else
		local ox = 0
		for i,e in ipairs(self.elements) do
			love.graphics.translate(ox,0)
			e:draw()
			love.graphics.translate(-ox,0)
			ox = ox + e.width
			if self.resizable and i < #self.elements then
				love.graphics.setColor(colors.scrollbar)
				love.graphics.line(self.dividers[i]-1,0,
								self.dividers[i]-1,self.height)
			end
		end
	end
	-----------------------------------------------------------------------
	-- if self.focused then
	-- 	love.graphics.setColor(colors.white)
	-- 	love.graphics.rectangle('line', 0,0,self.width,self.height)
	-- 	love.graphics.setColor(255,255,255)
	-- 	love.graphics.printf(
	-- 		"FRAME\n("..self.x..", "..self.y..")\n"..self.width..", "..self.height,
	-- 		0,self.height/2,self.width,"center")
	-- end
	-----------------------------------------------------------------------

end

function Frame:mousepressed(x,y,button)
	if button == LMB then
		if self.dividers.highlighted then
			self.dividers.grabbed = self.dividers.highlighted
			return end
	end
	if self.layout == "vertical" then
		local oy = 0
		for i,e in ipairs(self.elements) do
			e:mousepressed(x,y - oy,button)
			oy = oy + e.height
		end
	else
		local ox = 0
		for i,e in ipairs(self.elements) do
			e:mousepressed(x - ox,y,button)
			ox = ox + e.width
		end
	end
end

function Frame:mousereleased(x,y,button)
	if self.layout == "vertical" then
		local oy = 0
		for i,e in ipairs(self.elements) do
			-- if self.dividers.grabbed then
			-- 	e:setSize(self.width,self.dividers[i] - (self.dividers[i-1] or 0)) end
			e:mousereleased(x,y - oy,button)
			oy = oy + e.height
		end
	else
		local ox = 0
		for i,e in ipairs(self.elements) do
			-- if self.dividers.grabbed then
			-- 	e:setSize(self.dividers[i] - (self.dividers[i-1] or 0),self.height) end
			e:mousereleased(x - ox,y,button)
			ox = ox + e.width
		end
	end
	if button == LMB then
		self.dividers.grabbed = nil
	end
end

function Frame:wheelmoved(x,y)
	if self.focused then
		for i,e in ipairs(self.elements) do
			if e.wheelmoved then
				e:wheelmoved(x,y)
			end
		end
	end
end

function Frame:keypressed(k)
	if self.focused then
		for i,e in ipairs(self.elements) do
			e:keypressed(k)
		end
	end
end

function Frame:keyreleased(k)
	if self.focused then
		for i,e in ipairs(self.elements) do
			e:keyreleased(k)
		end
	end
end

VideoFrame = {}
VideoFrame.__index = VideoFrame

function VideoFrame.make()
	local w = {}
	setmetatable(w, VideoFrame)

	w.width, w.height = 1,1
	w.x,w.y = 0,0

	--[[ The Video Frame states are as follows:
		-3 : fast reverse
		-2 : quick revers
		-1 : reverse
		0 : pause
		1 : play
		2 : quick forward
		3 : fast forward                       ]]

	w.state = 0
	w.stream = nil
	w.data = nil
	w.frame = nil
	w.frameWidth = profile.width
	w.frameHeight = profile.height
	w.fps = profile.fps
	w.duration = nil

	--[[ The buffer caches frame data.
		Frames are stored sequentialy at
		the number of the frame, starting
		at zero.                         ]]

	-- w.buffer = {}
	w.buffer = 0
	w.bufferFile = io.tmpfile()

	w.time = 0
	w.refresh = false

	w.moveable = false
	w.offset = {0,0,nil,nil}
	w.frameScale = 1

	w.showControls = true
	w.contextPrime = false

	return w
end

function VideoFrame:setStream(stream,w,h,duration,fps,frame)
	-- print(w,h,duration,fps)
	self.stream = stream
	self.data = stream and love.image.newImageData(w or profile.width, h or profile.height) or nil
	self.frame = stream and love.graphics.newImage(self.data) or nil
	self.frameWidth = w or profile.width
	self.frameHeight = h or profile.height
	self.fps = fps or profile.fps
	self.duration = duration or nil
	-- -- self.buffer = {}
	-- self.buffer = 0
	-- self.bufferFile:close()
	-- self.bufferFile = io.tmpfile()
	-- self.bufferFile:setvbuf("full",self.frameWidth*self.frameHeight*3)
	-- print("buffer file len",self.bufferFile:seek("end"))
	-- self.bufferFile:seek("set")
	if not frame then
		self.time = 0
	else
		--set time from frame or whatever
	end
	self.refresh = true
	self:updateStream(0)
	-- print("stream set, "..self.frameWidth,self.frameHeight)
end

function VideoFrame:updateStream(dt)
	if self.stream then
		self.time = self.time + dt*self.state

		if self.time < 0 then
			self.state = 0
			self.time = 0
			self.refresh = true
		elseif self.time > self.duration then
			self.state = 0
			self.time = self.duration
			self.refresh = true
			-- self.buffer[#self.buffer+1] = true -- duplicat last frame
			-- self.stream:close()
		end

		-- local bufferIndex = self:getBuffer(self.time)
		-- if self.buffer[bufferIndex] then
		-- imageDataExtra.setData_24(self.data:getPointer(), self.stream:next(), self.frameWidth, self.frameHeight)
		-- if self.time ~= 0 then
		if self.refresh then
			imageDataExtra.setData_32(self.data:getPointer(), self.stream:next(), self.frameWidth, self.frameHeight)
			self.frame:refresh()
			self.refresh = false
		end
		-- end
		--[[
		if bufferIndex <= self.buffer then
			self.bufferFile:seek("set",bufferIndex*self.frameWidth*self.frameHeight*3)
			local raw = self.bufferFile:read(self.frameWidth*self.frameHeight*3)
			if raw then
				self.data:setData(raw)
				self.frame:refresh()
			end
			-- self.bufferFile:flush()
		else
			-- if self.state == 2 then
			-- 	self.stream:read(self.frameWidth*self.frameHeight*3)
			-- 	self.stream:flush()
			-- elseif self.state == 3 then
			-- 	self.stream:read(self.frameWidth*self.frameHeight*6)
			-- 	self.stream:flush()
			-- end
			local raw = self.stream:read(self.frameWidth*self.frameHeight*3)
			-- self.buffer[bufferIndex] = true
			self.buffer = bufferIndex
			if raw then
				self.bufferFile:write(raw)
				self.data:setData(raw)
				self.frame:refresh()
				self.bufferFile:flush()
			end
			self.stream:flush()
		end]]
		-- if bufferIndex ~= self.buffer then
		-- 	if math.abs(bufferIndex - self.buffer) > 1 then
		-- 		self.strea:seek("set",bufferIndex*self.frameWidth*self.frameHeight*3)
		-- 	end
		-- 	self.buffer = bufferIndex
		-- 	local raw = self.stream:read(self.frameWidth*self.frameHeight*3)
		-- 	if raw then
		-- 		self.data:setData(raw)
		-- 		self.frame:refresh()
		-- 	end
		-- end
	end
end

function VideoFrame:getBuffer(t)
	return math.floor(math.min(math.max(0, t*self.fps ),self.duration*self.fps -1))
end

function VideoFrame:setState(state)
	self.state = state
end

function VideoFrame:setSize(width, height)
	self.width,self.height = width, height
end

function VideoFrame:draw()

	love.graphics.setScissor(self.x,self.y,self.width,self.height)

	-- love.graphics.setColor(colors.videoFrameBG)
	love.graphics.setColor(colors.widget)
	love.graphics.rectangle("fill", 0,0,self.width,self.height)

	local scale = self.frameScale*math.min(self.width/(self.frameWidth),
											(self.height-48)/(self.frameHeight))
	local x = (self.width/2) - (self.frameWidth/2)*scale - self.offset[1]
	local y = (self.height/2) - (self.frameHeight/2)*scale - self.offset[2]
	if self.frame then

		love.graphics.setColor(colors.white)
		love.graphics.draw(self.frame,x,y,0,scale)

		love.graphics.setColor(255,0,0)
		love.graphics.rectangle("line",x,y,profile.width*scale,profile.height*scale)
	else

		love.graphics.setColor(0,0,0)
		love.graphics.rectangle("fill",x,y,profile.width*scale,profile.height*scale)
		love.graphics.setColor(255,255,255)
		love.graphics.printf('No Clip', x,y + profile.height*scale/2,profile.width*scale, "center")
		-- love.graphics.print(x .. ', ' .. y .. '\n' .. self.x .. ', ' .. self.y
		-- 	.. '\n'.. scale, x,y)
	end

	if self.showControls then
		love.graphics.setColor(colors.widget)
		love.graphics.rectangle("fill",0,self.height - 24,self.width,24)

		--draw control buttons

		love.graphics.setColor(colors.white)
		if self.stream then
			love.graphics.print(toHMS(self.time)..'/'..toHMS(self.duration or 0),124,self.height-20)
		else
			love.graphics.print('--.--.--/--.--.--',124,self.height-20)
		end
	end

	love.graphics.setScissor()
	-----------------------------------------------------------------------
		-- love.graphics.setColor(255,255,255)
		-- love.graphics.printf("VIDEO FRAME",0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------
end

function VideoFrame:update(dt,x,y)

	local mx, my = mouseTable.x,mouseTable.y
	mx, my = mx - (x or 0), my - (y or 0)

	local scale = self.frameScale*math.min(self.width/(self.frameWidth),
												(self.height-24)/(self.frameHeight))
	if (self.frameWidth*scale > self.width or
		self.frameHeight*scale > self.height) then
		if self.offset[3] then
			self.offset[1] = self.offset[1] - (mx - self.offset[3])
			self.offset[3] = mx
			self.offset[2] = self.offset[2] - (my - self.offset[4])
			self.offset[4] = my
			cursorRequest = "hand"
		end
	else
		self.offset[1] = 0
		self.offset[2] = 0
	end

	self:updateStream(dt)

end

function VideoFrame:mousepressed(x,y,button)
	if self.parent.focused then
		if y <= self.height - 24 then
			if button == MMB and self.moveable then
				self.offset[3] = x
				self.offset[4] = y
			end
		else
			if x > 124 then                  --tracker controls
				if button == MWU then
					--track right
				elseif button == MWD then
					--track left
				elseif button == MMB then
					--add marker
				end
			else                             --playback controls

			end
		end

		if button == RMB then
			self.contextPrime = true
		end
	end
end

function VideoFrame:mousereleased(x,y,button)
	if button == MMB then
		self.offset[3] = nil
		self.offset[4] = nil
	elseif button == RMB then
		if self.contextPrime then
			print("created context menu");
			self.contextMenu = ContextMenu.make( --should be real mouse x,y
								{'Info', function () self:toggleInfo() end})
			State.setContextMenu(self.contextMenu)
		end
	end
	self.contextPrime = false
end

function VideoFrame:wheelmoved(x,y)
	if love.keyboard.isDown('rctrl','lctrl') then
		self.frameScale = math.min(4,math.max(0.01,self.frameScale + y/20))
	else
		--scroll
	end
end

function VideoFrame:keypressed(k)
	if self.parent.focused then
		if k == ' ' or k == 'k' then
			self.state = self.state ~= 0 and 0 or 1
			if self.time == self.duration then
				self.time = 0
			end
		elseif k == 'j' then
			self.state = math.max(self.state -1, -3)
		elseif k == 'l' then
			self.state = math.min(self.state +1, 1) -- i just limited this to normal speed
		elseif k == 'left' then
			self.time = self.time - 1/self.fps
		elseif k == 'right' then
			self.time = self.time + 1/self.fps
		end
	end
end

function VideoFrame:keyreleased(k)

end

ClipList = {}
ClipList.__index = ClipList

function ClipList.make()
	local w = {}
	setmetatable(w, ClipList)

	w.width, w.height = 0,0
	w.columnWidth = 0
	w.showInfo = false
	w.clips = {}
	w.selected = {}
	w.lastSelected = 1
	w.offset = {0,0}
	w.drawScroll = false
	w.contextPrime = false
	w.dragPrime = false

	w.videoFrame = nil

	w.buttons = {}

	w.browser = nil

	return w
end

function ClipList:openClips(files)

	setLoadStatus(1)

	for i=1, #files do
		-- print(files[i])
		self.clips[#self.clips+1] = Video.Clip.make(files[i])
		-- print("open lip thum",self.clips[#self.clips].length*.5)
		self.clips[#self.clips].thumb = self.clips[#self.clips].videoStream:getFrame(self.clips[#self.clips].length*.5,48,48)
	end

	self.lastSelected = #self.clips
	if self.videoFrame and #self.clips > 0 then
		self.videoFrame:setStream(self.clips[#self.clips]:getStream(),
									self.clips[#self.clips].width,
									self.clips[#self.clips].height,
									self.clips[#self.clips].length,
									self.clips[#self.clips].fps)
	end

	self.drawScroll = (#self.clips > (self.height-24)/100)

	setLoadStatus(0)

end

function ClipList:setVideoFrame(videoFrame)
	self.videoFrame = videoFrame
	print("VF set")
end

function ClipList:toggleInfo(t)
	self.showInfo = t or not self.showInfo; self:setSize(self.width,self.height) end

function ClipList:doRemove()
	--[[ this is broken for range of selections]]
	for i,_ in pairs(self.selected) do
		--check if is dependancy
		--delete proxies
		--remove from timeline
		--remove from groups
		self.lastSelected = math.max(1, i-1)
		self.selected[i] = nil
		table.remove(self.clips, i)
	end
	print("removed")
end

function ClipList:setSize(width, height)
	self.width,self.height = width, height
	self.columnWidth = self.showInfo and math.ceil(self.width/2) or self.width
end

function ClipList:draw()

	--[[ Clip info ]]

	love.graphics.setScissor(self.x+self.columnWidth,self.y,self.columnWidth,self.height)
	if self.showInfo then
		love.graphics.setColor(colors.widget)
		love.graphics.rectangle("fill",self.columnWidth,0,
					self.width-self.columnWidth,self.height)
	end

	--[[ The list of clips. Filler thumbnail is in place.
		Also accounts for scrolling.                     ]]

	love.graphics.setScissor(self.x,self.y,self.columnWidth,self.height)
	love.graphics.translate(-self.offset[1],-self.offset[2])
	for i,c in ipairs(self.clips) do
		love.graphics.translate(0,(i-1)*100)

		if i == self.lastSelected then
			love.graphics.setColor(colors.selection)
			love.graphics.rectangle("fill",-self.offset[1],0,
											self.columnWidth,100)
		elseif self.selected[i] then
			love.graphics.setColor(colors.selection[1],
									colors.selection[2],
									colors.selection[3],
									128)
			love.graphics.rectangle("fill",-self.offset[1],0,
											self.columnWidth,100)
		end

		if c.thumb then
			love.graphics.setColor(colors.white)
			love.graphics.draw(c.thumb,2,2,0,2,2)
		else
			love.graphics.setColor(colors.widget)
			love.graphics.rectangle("fill",2,2,96,96)
		end

		love.graphics.setColor(colors.white)
		love.graphics.print("Path: "..c.path..'\n'.."Duration: "..toHMS(c.length),100,4)

		if i ~= #self.clips then
			love.graphics.setColor(255,255,255,128)
			love.graphics.line(0,101,self.columnWidth,101)
		end

		love.graphics.translate(0,-(i-1)*100)
	end
	love.graphics.translate(self.offset[1],self.offset[2])

	if #self.clips == 0 then
		love.graphics.setColor(colors.scrollbar)
		love.graphics.printf("No clips imported.",0,self.height/2,self.columnWidth,"center")
	end

	if self.drawScroll then
		love.graphics.setLineWidth(4)
		love.graphics.setColor(255,255,255,128)
		local y = self.offset[2]/(#self.clips*100)*(self.height-24)
		love.graphics.line (self.columnWidth - 4,
							y,
							self.columnWidth - 4,
							y + math.max(4, (self.height-24)/(#self.clips * 25)))
		love.graphics.setLineWidth(1)
	end

	love.graphics.setScissor()

	--[[ Toolbar ]]

	love.graphics.setColor(colors.widget)
	love.graphics.rectangle("fill",0,self.height-24,self.width,24)


	--[[ Toolbar buttons. Buttons start drawing
		at 2 pixels in, so... 					]]

		love.graphics.setColor(colors.white)
	--[[ Open ]]
	icons.open:draw(2,self.height - 24, 24)
	--[[ Remove ]]
	icons.remove:draw(28,self.height - 24, 24)
	--[[ Info ]]
	icons.info:draw(self.columnWidth - 26,self.height - 24, 24)

	if self.buttons[1] then
		love.graphics.setColor(255,255,255,90)
		love.graphics.rectangle("fill",2,self.height - 24,24,24)
	end
	if self.buttons[2] then
		love.graphics.setColor(255,255,255,90)
		love.graphics.rectangle("fill",28,self.height - 24,24,24)
	end
	if self.buttons[3] then
		love.graphics.setColor(255,255,255,90)
		love.graphics.rectangle("fill",self.columnWidth - 26,self.height - 24,24,24)
	end


	-----------------------------------------------------------------------
		-- love.graphics.setColor(255,255,255)
		-- love.graphics.printf("CLIP LIST",0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------

end

function ClipList:update(dt,x,y)

	if self.browser and self.browser.ready then
		self:openClips(self.browser:report())
		self.browser = nil
	end

	local mx, my = mouseTable.x,mouseTable.y
	mx, my = mx - (x or 0), my - (y or 0)

	--[[ Toolbar buttons. Buttons start drawing
		at 2 pixels in, so... 					]]

		love.graphics.setColor(colors.red)
	love.graphics.rectangle("fill",2,self.height - 24,24,24)
	love.graphics.rectangle("fill",28,self.height - 24,24,24)
	love.graphics.rectangle("fill",self.width - 26,self.height - 24,24,24)

	if my > self.height - 24 and my < self.height then

		if mx > 2 and mx < 26 then
			self.buttons[1] = true
		else
			self.buttons[1] = false
		end
		if mx > 28 and mx < 52 then
			self.buttons[2] = true
		else
			self.buttons[2] = false
		end
		if mx > self.columnWidth-26 and mx < self.columnWidth-2 then
			self.buttons[3] = true
		else
			self.buttons[3] = false
		end
	else
		self.buttons[1] = false
		self.buttons[2] = false
		self.buttons[3] = false
		if mx < self.columnWidth then

			--[[ Provide clips to the mouse if click and drag ]]

			if self.parent.focused and #self.clips > 0 and self.dragPrime and mouseTable.drag and not mouseTable.source then
				local t = {}
				t[1] = self.clips[self.lastSelected]
				t.length = t[1].length
				for i,_ in pairs(self.selected) do
					if i ~= self.lastSelected then
						t[#t+1] = self.clips[i]
						t.length = t.length + self.clips[i].length
					end
				end

				mouseTable.source = "ClipList"
				mouseTable.dragImage = t[1].thumb
				mouseTable.target = t
			end

		end
	end

end

function ClipList:mousepressed(x,y,button)
	if self.parent.focused then
		if button == LMB then
			--[[ Import ]]
			if self.buttons[1] then
				self.browser = Browser.make(nil,nil,true)
				State.setModal(self.browser)
			--[[ Remove ]]
			elseif self.buttons[2] then
				self.doRemove()
			--[[ Info ]]
			elseif self.buttons[3] then
				self:toggleInfo()
			end
			--[[ Click and Drag ]]
			if x >=0 and x <= self.columnWidth and
				y >= 0 and y <= self.height-24 then
				local i = math.floor((y+self.offset[2])/100) +1

				if self.videoFrame and i > 0 and i <= #self.clips then
					self.dragPrime = true
					if i ~= self.lastSelected then
						if not love.keyboard.isDown('lctrl','rctrl') then
							self.selected = {}
						else
							self.selected[i] = not self.selected[i]
						end
						if love.keyboard.isDown('lshift','rshift') then
							for j= self.lastSelected, i, math.sign(i-self.lastSelected) do
								self.selected[j] = true
							end
						end
						self.selected[i] = true
						self.lastSelected = i
						self.videoFrame:setState(0)
						self.videoFrame:setStream(self.clips[i]:getStream(),
													self.clips[i].width,
													self.clips[i].height,
													self.clips[i].length,
													self.clips[i].fps)
					else
						if love.keyboard.isDown('lctrl','rctrl') then
							self.selected[i] = false
							self.lastSelected = table.maxn(self.selected) or 0
							if self.lastSelected ~= 0 then
							self.videoFrame:setStream(self.clips[self.lastSelected]:getStream(),
														self.clips[self.lastSelected].width,
														self.clips[self.lastSelected].height,
														self.clips[self.lastSelected].length,
														self.clips[self.lastSelected].fps)
							end
						end
					end
				end
			end
		elseif button == RMB then
			self.contextPrime = true
		end
	end
end

function ClipList:mousereleased(x,y,button)
	if self.parent.focused then
		if button == RMB then
			if y >= 0 and y <= self.height-24 then
				local i = math.floor((y+self.offset[2])/100) +1
				if not self.selected[i] then
					self.selected = {}
					self.lastSelected = i
					self.selected[i] = true
					print("altered selection")
				end
			end
			if self.contextPrime then
				print("created context menu");
				self.contextMenu = ContextMenu.make(
									{'Import', function () self.browser = Browser.make(nil,nil,true);
															State.setModal(self.browser) end},
									{'Info', function () self:toggleInfo() end},
									{'Rename', nil},
									{'Tag', nil},
									{'Generate Proxy', nil},
									{'View Effects', nil},
									{'Remove', #self.clips > 0 and function () self:doRemove() end or nil})
				State.setContextMenu(self.contextMenu)
			end
		end
	end
	self.contextPrime = false
	self.dragPrime = false
end

function ClipList:wheelmoved(x,y)
	self.offset[2] = math.max(0,math.min(#self.clips*100-74,self.offset[2] - y*mouseTable.scrollDistance))
end

function ClipList:keypressed(k)

end

function ClipList:keyreleased(k)

end

--[[ Since I moved this, comments need to be redone ]]

Track = {}
Track.__index = Track

function Track.make(_type)
	local t = {}
	setmetatable(t,Track)

	t.mute = false
	t.hide = false
	t.gain = 1
	--[[ refs ar {ref,in,out} ]]
	t.references = {}
	t.selected = {}
	t.lastSelected = 0
	t.length = 0
	t.type = _type or "video"

	return t
end

function Track:isOccupied(x,l)
	for i,r in ipairs(self.references) do
		if (x > r[2] and x < r[3]) or
			((x+l) > r[2] and x+l < r[3]) then
				return true
		end
	end
end

--[[ takes a references and an in point "start" ]]
function Track:addReference(reference,start)

	if reference.type == self.type and
		not self:isOccupied(start,reference.length) then

		self.references[#self.references+1] = {reference,start,start+reference.length}
		self.references[#self.references][1]._in = start
		self.references[#self.references][1].out = start + reference.length
	end

	print("added references")

end

Tracker = {}
Tracker.__index = Tracker

function Tracker.make()
	local w = {}
	setmetatable(w, Tracker)

	w.scale = 1
	w.offset = {0,0}

	--[[ Despite how clips work, there are only four
		types of tracks: Video, Audio, Shape and Effect.
		Video tracks have video and/or audio or photo
		Audio tracks have only audio
		Shape tracks have shape objects
		Effect tracks have effects which apply downwards]]

	w.tracks = {}
	w.scissor = {0,0}
	w.mouse = {0,0}

	--[[ Markers appear as yellow lines, with a label
		running down them. A table with two entries,
		the location (in seconds) and the label.     ]]

	w.markers = {}

	--[[ The in and out points, in seconds ]]

	w.inOut = {0,120}

	--[[ Playhead location, in seconds ]]

	w.location = 0
	w.playheadHighlight = false
	w.playheadHeld = false
	w.length = 10

	w.masterStream = VideoStream.make(nil, profile.width, profile.height)
	w.videoFrame = nil
	w.contextPrime = false

	return w
end

--[[ Adds a track to the tracker. Valid aruguments
	are:
		0/'v'/"video"  : video track
		1/'a'/"audio"  : audio track
		2/'s'/"shape"  : shape track
		3/'e'/"effect" : effect track             ]]

function Tracker:addTrack(t)
	if not t or t == 0 or t == 'v' or t == "video" then

		--[[ Video tracks have:
			[1] : a table of references
			mute: whether to mute
			hide: whether to hide
			gain: volume gain          ]]

		self.tracks[#self.tracks+1] = UI.Track.make("video")

	elseif t == 1 or t == 'a' or t == "audio" then

		--[[ Audio tracks have:
			[1] : a table of references
			mute: whther to mute
			gain: volume gain          ]]

		-- local track = {}
		-- track.mute = false
		-- track.gain = 1
		-- track.references = {}
		-- track.selected = {}
		-- track.lenght = 0
		-- track.type = "audio"

		self.tracks[#self.tracks+1] = UI.Track.make("audio")

	elseif t == 2 or t == 's' or t == "shape" then
		-- need to do this
	elseif t == 3 or t == 'e' or t == "effect" then
		-- need to do this
	end
end

function Tracker:setSize(width, height)
	self.width,self.height = width, height
end


function Tracker:setVideoFrame(videoFrame)
	self.videoFrame = videoFrame
	print("VF set")
end

function Tracker:draw()

	--[[ Backgrounds ]]

	love.graphics.setColor(colors.trough)
	love.graphics.rectangle("fill",128,0,self.width,32)

	love.graphics.translate(128-self.offset[1],32)

	--[[ Major and minor ticks. At zoom_1, we have
		five pixels per second, three-hundred per minute.
		Marks below five pixels apart are not shown.     ]]
	local _width = math.ceil((self.width-128) / self.scale) -- the scaled width
	local top, bottom = 32,self.height-32

	local minuteWidth  = 300*self.scale
	local secondWidth  = 5*self.scale
	local desecondWidth= 0.5*self.scale
	local start = minuteWidth*math.modf(self.offset[1]/minuteWidth)
	for i=start,self.offset[1]+self.width, minuteWidth do
		love.graphics.setColor(colors.scrollbar)
		love.graphics.line(i,-26,i,bottom)
		if secondWidth >= 1 then
		for j= i,i+minuteWidth, secondWidth do
			love.graphics.line(j,0-16*math.min(1,secondWidth/8),j,0)
			if desecondWidth >= 1 then
			for k= j+desecondWidth, j+secondWidth, desecondWidth do
				love.graphics.line(k,-8*math.min(1,desecondWidth/4),k,0)
			end
			end
			if self.scale > 1.6 then -- I don't think this should be hard coded
				love.graphics.print( toHMS(math.round((j-i)/secondWidth,1), nil, true), j+2,-16 )
			end
		end
		end
		love.graphics.setColor(colors.white)
		love.graphics.print( toHMS(math.round(i/secondWidth,1), nil, true), i+2,-26 )
	end

	--[[ Tracks ]]

	love.graphics.setScissor(self.scissor[1],self.scissor[2]+32,self.width,math.max(1,self.height-32))
	love.graphics.translate(0,-32)

	love.graphics.translate(0,self.offset[2]+32)
	for i,t in ipairs(self.tracks) do
	if (i-1)*100 >= -self.offset[2]-100 and (i-1)*100 <= -self.offset[2]+self.height+132 then
		love.graphics.setColor(colors.widget)
		love.graphics.rectangle("fill",self.offset[1],(i-1)*100,self.width,100)
		love.graphics.setColor(colors.trough)
		love.graphics.line(self.offset[1],i*100,self.offset[1]+self.width,i*100)

		--[[ Draw references ]]
		love.graphics.translate(0,(i-1)*100)
		for j,r in ipairs(t.references) do
			local refX,refWidth = r[1]._in * secondWidth, r[1].length * secondWidth

			if (refX >= self.offset[1] - (128*secondWidth) and refX <= self.offset[1]+self.width) or
				(refX+refWidth >= self.offset[1] and refX+refWidth <= self.offset[1]+self.width) then

				love.graphics.setColor(colors[t.type.."Ref"])
				love.graphics.rectangle("fill",refX,1,refWidth,98)
				--print stuff
				love.graphics.setColor(255,255,255)
				if refWidth >= 100 then
					love.graphics.draw(r[1].thumb,refX+4,4,0,2)
				end

				love.graphics.setColor(0,0,0,128)
				love.graphics.setLineWidth(2)
				love.graphics.rectangle("line",refX+1,0,refWidth-2,100)

				if j == t.selected[j] then
					love.graphics.setColor(colors.white)
					love.graphics.setLineWidth(2)
					love.graphics.rectangle("line", refX, 0, refWidth, 100)
				end

			end
		end
		love.graphics.translate(0,(i-1)*-100)
	end
	end

	if self.parent.focused and mouseTable.source == "ClipList" then
		local track_i = math.floor((self.mouse[2]-top)/100)
		if self.tracks[track_i+1] and self.mouse[1] > 128 then
			love.graphics.setColor(0,0,0,128)
			love.graphics.rectangle('fill',self.mouse[1]-128+self.offset[1],track_i*100,
									mouseTable.target.length * secondWidth,100)
		end
		love.graphics.setColor(colors.white)
		love.graphics.stippledLine(self.mouse[1]-128+self.offset[1],0,self.mouse[1]-128+self.offset[1],bottom,20,20)
	end

	love.graphics.translate(0,-self.offset[2])
	love.graphics.setScissor()

	--[[ In and out points ]]

	local inPoint = self.inOut[1]*secondWidth
	local outPoint = self.inOut[2]*secondWidth
	if inPoint >= start and inPoint <= self.offset[1]+self.width then
		love.graphics.setColor(colors.cyan)
		love.graphics.line(inPoint,0,inPoint,bottom)
		love.graphics.setColor(0,0,0,128)
		love.graphics.stippledLine(inPoint-1,0,inPoint-1,bottom,10,10)
		love.graphics.setColor(255,255,255,200)
		love.graphics.print("in",inPoint+18,0,math.pi/2)
	end
	if outPoint >= start and outPoint <= self.offset[1]+self.width then
		love.graphics.setColor(colors.cyan)
		love.graphics.line(outPoint,0,outPoint,bottom)
		love.graphics.setColor(0,0,0,128)
		love.graphics.stippledLine(outPoint+1,0,outPoint+1,bottom,10,10)
		love.graphics.setColor(255,255,255,200)
		love.graphics.print("out",outPoint+18,0,math.pi/2)
	end
	if inPoint >= self.offset[1] - (128*secondWidth) or outPoint <= self.offset[1]+self.width then
		love.graphics.setColor(colors.cyan)
		love.graphics.line( math.max(inPoint, self.offset[1]), 0,
							math.min(outPoint, self.offset[1]+self.width),0 )
	end

	--[[ Markers ]]

	for i,m in ipairs(self.markers) do
		local markerX = m[1]*secondWidth
		if markerX >= start and markerX <= self.offset[1]+self.width then
			love.graphics.setColor(colors.marker)
			love.graphics.line(markerX,0,markerX,bottom)
			love.graphics.setColor(0,0,0,128)
			love.graphics.stippledLine(markerX-1,0,markerX-1,bottom,10,10)
			love.graphics.setColor(255,255,255,200)
			love.graphics.print(m[2],markerX+18,0,math.pi/2)
		end
	end

	--[[ Playhead ]]

	love.graphics.setLineWidth(2)
	love.graphics.setColor(255,0,0,128)
	love.graphics.line(self.location*secondWidth,0,self.location*secondWidth,
									bottom)
	love.graphics.setLineWidth(1)
	if self.playheadHighlight then
		local stamp = toHMS(self.location,2)
		local stampWidth = love.graphics.getFont():getWidth(stamp)
		local stampHeight = love.graphics.getFont():getHeight(stamp)
		love.graphics.setColor(colors.playhead)
		love.graphics.push()
		love.graphics.translate(self.location*secondWidth,0)

		love.graphics.circle("line", 0, -12,12,4)
		love.graphics.polygon("fill",0,-24.5,12+stampWidth+4,-24.5,12+stampWidth+4,-12,12,-12)
		love.graphics.polygon("fill",0,0,12,-12,12+stampWidth+4,-12,12+stampWidth+4,0)

		love.graphics.setColor(colors.white)
		love.graphics.print( stamp, 14, -20)

		love.graphics.pop()
	end
	love.graphics.translate(self.offset[1]-128,-32)

	--[[ Track Buttons ]]

	love.graphics.setColor(colors.widget)
	love.graphics.rectangle("fill",0,0,128,self.height)

			--"add track" button
	love.graphics.setColor(colors.trough)
	love.graphics.rectangle("fill",0,0,128,32)
	love.graphics.setColor(255, 0, 0)
	love.graphics.rectangle("fill",49,2,30,30)
	love.graphics.setColor(colors.scrollbar)
	love.graphics.line(2,32,126,32)

	love.graphics.setScissor(self.scissor[1],self.scissor[2]+32,self.width,math.max(1,self.height-32))

		--track controls
	love.graphics.translate(0,self.offset[2]+32)
	for i,t in ipairs(self.tracks) do
		love.graphics.push()
		love.graphics.translate(0,(i-1)*100)

		love.graphics.setColor(colors.white)
		love.graphics.printf(t.type.." track\n"..#t.references,0,2,128,"center")
		love.graphics.setColor(colors.scrollbar)
		love.graphics.line(4,100,124,100)

		love.graphics.pop()
	end
	love.graphics.translate(0,-self.offset[2]-32)

	love.graphics.setScissor()

	--[[ Dividers ]]

	love.graphics.setColor(colors.scrollbar)
	love.graphics.line(128,0,128,self.height)
	-- love.graphics.line(128,32,self.width,32)

	-----------------------------------------------------------------------
		-- love.graphics.setColor(255,255,255)
		-- love.graphics.printf(self.scale,0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------
end

function Tracker:update(dt,x,y)
	--[[ mx and my are the properly offset
	mouse coodrdinates.                   ]]

	self.scissor = {x,y}

	local mx, my = mouseTable.x,mouseTable.y
	mx, my = mx - (x or 0), my - (y or 0)
	-- if mouseTable.source == 'ClipList' then
		self.mouse[1] = mx
		self.mouse[2] = my
	-- end

	-- if (mx >= 128 and mx <= self.width and my >= 0 and my <= 32) or self.playheadHeld then
	-- 	if love.mouse.isDown('l') then
	-- 		self.location = (self.offset[1]+mx-128)/(5*self.scale)
	-- 		self.playheadHeld = true
	-- 	else
	-- 		self.playheadHeld = false
	-- 	end
	-- else
	if self.playheadHeld then
		self.location = math.max(0,(self.offset[1]+mx-128)/(5*self.scale))
	end

	self.length = self.inOut[2]

	if mx >=0 and mx <= 128 then
		-- insert tracker controls here
	end

	if self.offset[1]+mx-128 >= self.location*(5*self.scale) - 3 and
		self.offset[1]+mx-128 <= self.location*(5*self.scale) + 3 and
		my >= 0 and my <= self.height then
		self.playheadHighlight = true
	else
		self.playheadHighlight = false
	end
end

function Tracker:mousepressed(x,y,button)
	if self.parent.focused then
		if x > 128 then
			if button == LMB then
				if y < 32 then
					self.playheadHeld = true
				end
				if self.videoFrame then
					self.videoFrame:setStream(self.masterStream:getStream(),
												profile.width,
												profile.height,
												self.length,
												profile.fps)
				end
			elseif button == MMB then
				print("should cut clip when possible")
			elseif button == MWR then
				self.offset[1] = math.max(0,self.offset[1] + mouseTable.scrollDistance)
			elseif button == MWL then
				self.offset[1] = math.max(0,self.offset[1] - mouseTable.scrollDistance)
			end
			if y <= 32 and button == MMB then
				self.markers[#self.markers+1] = {(self.offset[1]+x-128)/(5*self.scale),"marker_"..#self.markers}
				table.sort(self.markers, function (a,b) return a[1] < b[1] end)
			end

		elseif x >= 0 and x <= 128 and y >= 0 and y <= 32 then
			--add track
			self:addTrack()
			print("added track",#self.tracks)
		end
		if button == RMB then
			self.contextPrime = true
		end
	end
end

function Tracker:mousereleased(x,y,button)
	if button == LMB then
		self.playheadHeld = false
	elseif button == RMB then
		if self.contextPrime then
			self.contextMenu = ContextMenu.make(
								{'Info', function () self:toggleInfo() end},
								{'Tag', nil},
								{'View Effects', nil},
								{'Remove', nil})
			State.setContextMenu(self.contextMenu)
		end
	end
	self.contextPrime = false
	if self.parent.focused then
		if x > 128 and y > 32 then
			if button == LMB then
				local track = math.floor( (y -32 + self.offset[2])/100 )+1

				if track > 0 and track <= #self.tracks and
					mouseTable.source == "ClipList" and
					not mouseTable.drag and not mouseTable.prime then

					local start = math.round((x-128 + self.offset[1])/(5*self.scale),2)
					local ox = 0
					print("MOUSE EVENT",#mouseTable.target)
					for i,v in ipairs(mouseTable.target) do
						print("\t\tMOUSE EVENT @")
						self.tracks[track]:addReference( v:newReference(self.tracks[track].type),
														 start + ox  )
						ox = ox + v.length
					end

					mouseTable.source = nil
					mouseTable.target = nil
				end
			end
		end
	end
end

function Tracker:wheelmoved(x,y)
	if love.keyboard.isDown('lctrl','rctrl') then
		if self.scale < 10 then
			self.scale = math.min(60,math.max(.05,self.scale + y/20))
		else
			self.scale = math.min(60,math.max(.05,self.scale + y/2))
		end
	elseif love.keyboard.isDown('lshift','rshift') then
		self.offset[1] = math.max(0,self.offset[1] + y*mouseTable.scrollDistance)
	else
		self.offset[1] = math.max(0,self.offset[1] + x*mouseTable.scrollDistance)
		self.offset[2] = math.min(0,math.max(-(#self.tracks*100 - (self.height-50)),self.offset[2] + y*mouseTable.scrollDistance))
	end
end

function Tracker:keypressed(k)
	if self.parent.focused then
		if k == ' ' then
			if self.location*(5*self.scale) < self.offset[1] or
				self.location*(5*self.scale) > self.offset[1] + self.width then
				self.offset[1] = self.location*(5*self.scale)
			else
				-- send play to video frame
			end
		elseif k == 'm' and not self.markers[tostring(self.location)] then
			self.markers[#self.markers+1] = {self.location,"marker_"..#self.markers}
			self.markers[tostring(self.location)] = true
			table.sort(self.markers, function (a,b) return a[1] < b[1] end)
		elseif k == ']' then
			local i = 1
			while i <= #self.markers and self.location >= self.markers[i][1] do
				i = i + 1
			end
			self.location = i <= #self.markers and self.markers[i][1] or self.location
		elseif k == '[' then
			local i = #self.markers
			while i >= 1 and self.location <= self.markers[i][1] do
				i = i - 1
			end
			self.location = i > 0 and self.markers[i][1] or self.location
		elseif k == 'i' then
			self.inOut[1] = self.location
			if self.inOut[2] == self.inOut[1] then
				self.inOut[1] = self.inOut[1] - .1 end
		elseif k == 'o' then
			self.inOut[2] = self.location
			if self.inOut[2] == self.inOut[1] then
				self.inOut[2] = self.inOut[2] + .1 end
		elseif k == 'right' then
			-- eventually these should be relative to the zoom/scale
			-- also add shift and alt for large and fine skip rsptvly
			self.location = self.location + 1
		elseif k == 'left' then
			self.location = math.max(0,self.location - 1)
		end
	end
end

function Tracker:keyreleased(k)

end

AudioTracker = {}
AudioTracker.__index = AudioTracker

function AudioTracker.make()
	local w = {}
	setmetatable(w, AudioTracker)

	return w
end

function AudioTracker:setSize(width, height)
	self.width,self.height = width, height
end

function AudioTracker:draw()
	-----------------------------------------------------------------------
		love.graphics.setColor(255,255,255)
		love.graphics.printf("AUDIO TRACKER",0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------
end

function AudioTracker:update(dt)

end

function AudioTracker:mousepressed(x,y,button)

end

function AudioTracker:mousereleased(x,y,button)

end

function AudioTracker:keypressed(k)

end

function AudioTracker:keyreleased(k)

end

SearchList = {}
SearchList.__index = SearchList

function SearchList.make()
	local w = {}
	setmetatable(w, SearchList)

	return w
end

function SearchList:setSize(width, height)
	self.width,self.height = width, height
end

function SearchList:draw()

	-----------------------------------------------------------------------
		love.graphics.setColor(255,255,255)
		love.graphics.printf("SEARCH LIST",0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------
end

function SearchList:update(dt)

end

function SearchList:mousepressed(x,y,button)

end

function SearchList:mousereleased(x,y,button)

end

function SearchList:keypressed(k)

end

function SearchList:keyreleased(k)

end

EffectList = {}
EffectList.__index = EffectList

function EffectList.make()
	local w = {}
	setmetatable(w, EffectList)

	return w
end

function EffectList:setSize(width, height)
	self.width,self.height = width, height
end

function EffectList:draw()
	-----------------------------------------------------------------------
		love.graphics.setColor(255,255,255)
		love.graphics.printf("EFFECT LIST",0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------
end

function EffectList:update(dt)

end

function EffectList:mousepressed(x,y,button)

end

function EffectList:mousereleased(x,y,button)

end

function EffectList:keypressed(k)

end

function EffectList:keyreleased(k)

end

EffectProperties = {}
EffectProperties.__index = EffectProperties

function EffectProperties.make()
	local w = {}
	setmetatable(w, EffectProperties)

	return w
end

function EffectProperties:setSize(width, height)
	self.width,self.height = width, height
end

function EffectProperties:draw()


	-----------------------------------------------------------------------
		love.graphics.setColor(255,255,255)
		love.graphics.printf("EFFECT PROPERTIES",0,self.height/2,self.width,"center")
	-----------------------------------------------------------------------
end

function EffectProperties:update(dt)

end

function EffectProperties:mousepressed(x,y,button)

end

function EffectProperties:mousereleased(x,y,button)

end

function EffectProperties:keypressed(k)

end

function EffectProperties:keyreleased(k)

end

--[[ The right click menu. It always has
	entries for open, save and quit. Other
	entries can be added in between save
	and quit. Arguments are the entry's
	label followed by the entry's callback.]]

ContextMenu = {}
ContextMenu.__index = ContextMenu

function ContextMenu.make(...)
	local w = {}
	setmetatable(w, ContextMenu)

	w.entries = {   {"Open", openProject},
			{"Save", saveProject},}
	-- w.width,w.height = fonts.menuFont:getWidth("Save"),62
	w.width,w.height = love.graphics.getFont():getWidth("Save"),60
	w.close = false
	w.closePrime = false
	w.selected = 0

	local arg = {...}
	w.height = w.height + 4
	for i=1, #arg, 2 do
		w.entries[#w.entries+1] = arg[i]
		-- w.width = math.max(w.width, fonts.menuFont:getWidth(arg[i]) + 8)
		w.width = math.max(w.width, love.graphics.getFont():getWidth(arg[i][1]) + 8)
		w.height = w.height + 16
	end

	w.entries[#w.entries+1] = {"Quit", love.event.quit}

	local x,y = mouseTable.x, mouseTable.y
	w.x = x + w.width < LG.getWidth() and x or x - ((x+w.width) - LG.getWidth())
	w.y = y + w.height < LG.getHeight() and y or y - ((y+w.height) - LG.getHeight())

	return w
end

function ContextMenu:update( dt )
	local x,y = mouseTable.x - self.x, mouseTable.y -self.y

	if x >= 0 and x <= self.width and y >= 4 and y <= self.height-8 then
		y = y - 4
		if y > 32 then
			y = y - 4
		end
		if y > (#self.entries-1)*16 then
			y = y - 4
		end
		self.selected = math.ceil(y/16)
	end

end

function ContextMenu:draw()
	love.graphics.setColor(colors.widget)
	love.graphics.rectangle("fill",self.x,self.y,self.width,self.height)
	love.graphics.translate(self.x+4,self.y+4)
	-- love.graphics.setColor(colors.fg)
	love.graphics.setLineWidth(.5)

		-- love.graphics.print(self.entries[1][1],0,0)
		-- love.graphics.print(self.entries[2][1],0,16)


	-- love.graphics.translate(0,4)
	for i=1,#self.entries do
		local y = (i-1)*16

		if self.entries[i][2] then
			if self.selected == i then
				love.graphics.setColor(200,200,200)
				love.graphics.rectangle('fill',-4,y,self.width,16)
				love.graphics.setColor(0,0,0)
			else
				love.graphics.setColor(colors.fg)
			end
		else
			love.graphics.setColor(128,128,128,96)
		end
		love.graphics.print(self.entries[i][1],0,y+2)

		if i == 2 or i == #self.entries - 1 then
			love.graphics.setColor(128,128,128,128)
			love.graphics.line(2,y+17.51,self.width-10,y+17.5)
			love.graphics.translate(0,4)
		end

	end

	-- love.graphics.translate(0,(#self.entries-1)*16 + 4)
		-- love.graphics.setColor(128,128,128,128)
		-- love.graphics.line(2,-2.5,self.width-10,-2.5)

		-- love.graphics.setColor(colors.fg)
		-- love.graphics.print(self.entries[#self.entries][1],0,0)

	love.graphics.translate(-self.x-4,-self.y-12)
	love.graphics.setLineWidth(1)
end

function ContextMenu:keypressed( k )
	if k == 'up' then
		self.selected = self.selected - 1
		while self.selected < 1 or not self.entries[self.selected][2] do
			self.selected = (self.selected - 2) % #self.entries + 1
		end
	elseif k == 'down' then
		self.selected = self.selected + 1
		while self.selected > #self.entries or not self.entries[self.selected][2] do
			self.selected = (self.selected) % #self.entries + 1
		end
	elseif k == 'return' or k == 'kpenter' then
		self.entries[self.selected][2]()
	elseif k == 'escape' then
		self.close = true
	end
end

function ContextMenu:mousepressed( x,y,button )
	x,y = x - self.x, y -self.y

	if (x < 0 or x > self.width or y < 0 or y > self.height ) then
		self.closePrime = true
	else

	end
end

function ContextMenu:mousereleased( x,y,button )
	x,y = x - self.x, y -self.y

	if (x < 0 or x > self.width or y < 4 or y > self.height-8 ) and self.closePrime then
		self.close = true
	else
		self.closePrime = false
		y = y - 4
		if y > 32 then
			y = y - 4
		end
		if y > (#self.entries-1)*16 then
			y = y - 4
		end
		if self.entries[self.selected] and self.entries[self.selected][2] then
			self.entries[self.selected][2]()
			self.close = true
		end
	end
end

Browser = {}
Browser.__index = Browser

function Browser.make(dir,mode,multi)
	local w = {}
	setmetatable(w, Browser)

	w.dir = dir or love.filesystem.getUserDirectory()
	w.files = systemLS(w.dir)
	w.selected = {true}
	w.lastSelected = 1
	w.mode = mode or "open"
	w.multi = multi or false

	w.offset = 0
	w.x = LG.getWidth()*.25
	w.y = LG.getHeight()*.25

	w.width = math.max(100,math.floor(LG.getWidth()/2))
	w.height = math.max(100,math.floor(LG.getHeight()/2))

	--[[ Valid sort modes are:
		alpha
		type
		date]]
	w.sortMode = "alpha"

	w.close = false
	w.closePrime = false
	w.ready = false

	--[[ Needed to check double click ]]
	w.clickPrime = false
	w.clickTime = 0

	return w
end

function Browser:draw()
	love.graphics.push()
	love.graphics.origin()

	love.graphics.setColor(0, 0, 0, 200)
	love.graphics.rectangle("fill",0,0,LG.getWidth(),LG.getHeight())

	love.graphics.translate(self.x,self.y)

	love.graphics.setColor(colors.bg)
	love.graphics.rectangle("fill",0,0,self.width,self.height)

	love.graphics.translate(0,32-self.offset)
	love.graphics.setScissor(self.x,self.y +32,self.width,self.height - 32)
	for i,f in ipairs(self.files) do
		if self.lastSelected == i then
			love.graphics.setColor(colors.selection)
			love.graphics.rectangle("fill", 0, (i-1)*20, self.width, 20)
		elseif self.selected[i] then
			love.graphics.setColor(colors.selection[1],colors.selection[2],colors.selection[3],128)
			love.graphics.rectangle("fill", 0, (i-1)*20, self.width, 20)
		end
		love.graphics.setColor(colors.white)

		if f[-1] == '/' and not self.selected[i] then
			love.graphics.setColor(colors.cyan)
		end
		love.graphics.print(f-self.dir,4,(i-1)*20 + 2)

	end
	love.graphics.setScissor()
	love.graphics.translate(0,self.offset-32)

	love.graphics.setColor(colors.widget)
	love.graphics.rectangle("fill",0,0,self.width,32)

	love.graphics.setColor(colors.scrollbar)
	love.graphics.setColor(colors.white)
	love.graphics.print(self.dir,14,10)

	love.graphics.line(0,31.5,self.width,31.5)

	love.graphics.pop()
end

function Browser:update(dt)
	if self.clickPrime then
		self.clickTime = self.clickTime + dt
	end
	if self.clickTime > 0.25 then
		self.clickTime = 0
		self.clickPrime = false
	end
end

function Browser:setDir(dir)
	if os.execute('dir \"'..dir..'\"') then
		if dir:find('/%./?$') then
			return true
		elseif dir:find('/%.%./?$') then
			self.dir = dir:sub(1,dir:find('/[%w-_ ]+/%.%./?$'))
		else
			self.dir = dir or self.dir
		end
		self.files = systemLS(self.dir)
		self.selected = {true}
		self.lastSelected = 1
		self.offset = 0
		return true
	end
	return false
end


--[[ Returns a table containg the full paths
	of the selected items.                  ]]

function Browser:report()
	local answer = {}
	for i,_ in pairs(self.selected) do
		if self.files[i][-1] ~= '/' then
			answer[#answer+1] = self.dir..self.files[i]
		end
	end
	table.sort(answer)

	return answer
end

function Browser:keypressed(k)
	if k == 'escape' then
		self.close = true
	elseif k == 'up' then
		if not self.multi or not love.keyboard.isDown('lshift','rshift') then
			self.selected = {} end
		self.lastSelected = math.max(1,self.lastSelected - 1)
		self.selected[self.lastSelected] = true

		if self.lastSelected*20 < self.offset + 32 or self.lastSelected*20 > self.offset+self.height then
			self.offset = math.min(#self.files*20 - self.height + 100,(self.lastSelected-1)*20)
		end
	elseif k == 'down' then
		if not self.multi or not love.keyboard.isDown('lshift','rshift') then
			self.selected = {} end
		self.lastSelected = math.min(#self.files, self.lastSelected + 1)
		self.selected[self.lastSelected] = true

		if self.lastSelected*20 < self.offset or self.lastSelected*20 > self.offset+self.height-39 then
			self.offset = math.min(#self.files*20 - self.height + 100,self.offset+20)
		end
	elseif k == 'home' then
		if self.multi and love.keyboard.isDown('lshift','rshift') then
			for j=self.lastSelected,1,-1 do
				self.selected[j] = true
			end
		else
			self.selected = {}
			self.selected[1] = true
		end
		self.lastSelected = 1

		if self.lastSelected*20 < self.offset + 32 or self.lastSelected*20 > self.offset+self.height then
			self.offset = math.min(#self.files*20 - self.height + 100,(self.lastSelected-1)*20)
		end
	elseif k == 'end' then
		if self.multi and love.keyboard.isDown('lshift','rshift') then
			for j=self.lastSelected,#self.files do
				self.selected[j] = true
			end
		else
			self.selected = {}
			self.selected[#self.files] = true
		end
		self.lastSelected = #self.files

		if self.lastSelected*20 < self.offset or self.lastSelected*20 > self.offset+self.height-30 then
			self.offset = #self.files*20 - self.height + 100
		end
	elseif k == 'p' then
		self:setDir(self.dir..'..')
	elseif k == 'return' or k == 'kpenter' then
		if self.files[self.lastSelected][-1] == '/' then
			self:setDir(self.dir..self.files[self.lastSelected])
		else
			self.close = true
			self.ready = true
		end
	end
end

function Browser:mousepressed(x,y,button)
	x,y = x - self.x, y -self.y

	if (x < 0 or x > self.width or y < 0 or y > self.height ) and button <= MMB then
		self.closePrime = true
	else
		if button == LMB and y > 32 then
			local i = math.floor((y - 32 + self.offset)/20) + 1
			if i > 0 and i <= #self.files then
				if self.clickPrime then
					if self.files[self.lastSelected][-1] == '/' then
						self:setDir(self.dir..self.files[self.lastSelected])
					else
						self.close = true
						self.ready = true
					end
				elseif self.multi and love.keyboard.isDown('lctrl','rctrl') then
					self.selected[i] = not self.selected[i]
					if self.selected[i] then
						self.lastSelected = i
					end
				elseif self.multi and love.keyboard.isDown('lshift','rshift') then
					for j=self.lastSelected+math.sign(i-self.lastSelected),i,math.sign(i-self.lastSelected) do
						self.selected[j] = true
					end
					self.lastSelected = i
				else
					self.selected = {}
					self.selected[i] = true
					self.lastSelected = i
				end
				self.clickPrime = true
			end
		-- elseif button == MWU then
		-- 	self.offset = math.max(0,self.offset - 4)
		-- elseif button == MWD then
		-- 	self.offset = math.min(#self.files*20 - self.height + 100,self.offset + 4)
		end
	end
end

function Browser:mousereleased(x,y,button)
	x,y = x - self.x, y -self.y

	if (x < 0 or x > self.width or
			y < 0 or y > self.height) and self.closePrime then
		self.close = true
	else
		self.closePrime = false
	end
end

function Browser:wheelmoved(x,y)
	-- if y > 0 then
		self.offset = math.min(#self.files*20 - self.height + 100, math.max(0,self.offset - y*mouseTable.scrollDistance))
	-- elseif y < 0 then
	-- 	self.offset =
	-- end
end

function Browser:resize( w,h )
	self.x = w*.25
	self.y = h*.75

	self.width = math.max(100,math.floor(w/2))
	self.height = math.max(100,math.floor(h/2))
end

UI = {}
UI.Frame = Frame
UI.VideoFrame = VideoFrame
UI.ClipList = ClipList
UI.Track = Track
UI.Tracker = Tracker
UI.AudioTracker = AudioTracker
UI.SearchList = SearchList
UI.EffectList = EffectList
UI.EffectProperties = EffectProperties
UI.ContextMenu = ContextMenu
UI.Browser = Browser

return UI

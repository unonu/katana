UI = require("ui")

--[[ Edit mode is the hub mode, where everything
	returns to. From here, references can be
	placed in the timeline, cuts made and clips
	loaded into the project. From the timeline,
	effects can be added to the video and audio
	references, as well as transitions.        ]]

Edit = {}
Edit.__index = Edit

function Edit.make()
	local s = {}
	setmetatable(s, Edit)

	s.dividers = { {'h',math.floor(love.graphics.getHeight()/2)},
				 {'v',math.floor(love.graphics.getWidth()/2)}, }

	s.focusFrame = nil
	s.masterFrame = UI.Frame.make("vertical")
		s.topFrame = UI.Frame.make("horizontal")
			s.clipFrame = UI.Frame.make()
				s.clipList = UI.ClipList.make()
			s.videoFrame = UI.Frame.make()
				s.videoWidget = UI.VideoFrame.make()
		s.trackerFrame = UI.Frame.make()
			s.tracker = UI.Tracker.make()

	s.masterFrame:setSize(love.graphics.getWidth()-4,love.graphics.getHeight()-20)
	s.masterFrame.resizable = true
	s.masterFrame:addElement( s.topFrame )
	s.masterFrame:addElement( s.trackerFrame )
	s.trackerFrame:addElement( s.tracker )
	s.topFrame.resizable = true
	s.topFrame:addElement( s.clipFrame )
	s.topFrame:addElement( s.videoFrame )
	s.videoFrame:addElement( s.videoWidget )
	s.videoWidget.moveable = false
	s.clipFrame:addElement( s.clipList )
	s.clipList:setVideoFrame( s.videoWidget )
	s.tracker:setVideoFrame( s.videoWidget )

	s.focused = nil

	return s
end

function Edit:draw(width, height)
	if self.focusFrame then
		self.focusFrame:draw()
		return
	end
	self.masterFrame:draw()
end

function Edit:update(dt,x,y)
	if self.focusFrame then
		self.focusFrame:update(dt,x,y)
		return
	end
	self.masterFrame:update(dt,x,y)
end

function Edit:keypressed(k)
	if k == 'up' and love.keyboard.isDown('lctrl', 'rctrl') then
		if self.focusFrame then
			self.focusFrame = nil
			self.masterFrame:setSize(love.graphics.getWidth()-4,love.graphics.getHeight()-20)
		else
			self.focusFrame = self.focused
			self.focusFrame:setSize(love.graphics.getWidth()-4,love.graphics.getHeight()-20)
		end
	end
	if self.focusFrame then
		self.focusFrame:keypressed(k)
		return
	end
	self.masterFrame:keypressed(k)
end

function Edit:keyreleased(k)
	if self.focusFrame then
		self.focusFrame:keyreleased(k)
		return
	end
	self.masterFrame:keyreleased(k)
end

function Edit:mousepressed(x,y,button)
	if self.focusFrame then
		self.focusFrame:mousepressed(x,y,button)
		return
	end
	self.masterFrame:mousepressed(x,y,button)
end

function Edit:mousereleased(x,y,button)
	if self.focusFrame then
		self.focusFrame:mousereleased(x,y,button)
		return
	end
	self.masterFrame:mousereleased(x,y,button)
end

function Edit:wheelmoved(x,y)
	if self.focusFrame then
		self.focusFrame:wheelmoved(x,y)
		return
	end
	self.masterFrame:wheelmoved(x,y)
end

function Edit:resize(w,h)
	if self.focusFrame then
		self.focusFrame:setSize(w-4,h-20)
		return
	end
	self.masterFrame:setSize(w-4,h-20)
end

Effects = {}
Effects.__index = Effects

function Effects.make()
	local s = {}
	setmetatable(s, Effects)

	return s
end

function Effects:draw(width, height)

end

function Effects:update(dt,x,y)

end

function Effects:keypressed(k)

end

function Effects:keyreleased(k)

end

function Effects:mousepressed(x,y,button)

end

function Effects:mousereleased(x,y,button)

end

function Effects:resize(w,h)

end

Audio = {}
Audio.__index = Audio

function Audio.make()
	local s = {}
	setmetatable(s, Audio)

	return s
end

function Audio:draw(width, height)

end

function Audio:update(dt,x,y)

end

function Audio:keypressed(k)

end

function Audio:keyreleased(k)

end

function Audio:mousepressed(x,y,button)

end

function Audio:mousereleased(x,y,button)

end

function Audio:resize(w,h)

end

Render = {}
Render.__index = Render

function Render.make()
	local s = {}
	setmetatable(s, Render)

	return s
end

function Render:draw(width, height)

end

function Render:update(dt,x,y)

end

function Render:keypressed(k)

end

function Render:keyreleased(k)

end

function Render:mousepressed(x,y,button)

end

function Render:mousereleased(x,y,button)

end

function Render:resize(w,h)

end

State = {}
State.Edit = Edit
State.Effects = Effects
State.Audio = Audio
State.Render = Render
State.modal = nil
State.contextMenu = nil

function State.setModal(modal)
	State.modal = modal
end

function State.setContextMenu(contextMenu)
	State.contextMenu = contextMenu
end

return State

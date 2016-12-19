					  require("lua.moreMath")
					  require("lua.extra")
					  require("lua.graphics")
					  require("lua.keybinding")
State 				= require("lua.state")
Video 				= require("lua.video")
serial				= require("lua.serial")
-- FFI					= require("ffi")

colors = {}
colors.fg 			= {255,255,255,255}
colors.bg 			= {10,10,10,255}
colors.widget 		= {17,17,17,200}
colors.statusBar 	= {17,17,17,255}
colors.scrollbar 	= {60,60,60,255}
colors.trough 		= {20,20,20,255}
colors.videoFrameBG = {20,20,20,255}
colors.marker 		= {255,200,0}
colors.videoRef 	= {50,100,255}
colors.audioRef 	= {100,200,255}
colors.shapeRef 	= {255,225,0}
colors.effectRef 	= {100,100,100}
colors.selection 	= {40,150,180}
colors.playhead		= {255,0,0,180}
---------------------------------------
colors.white 		= {255,255,255}
colors.red 			= {255,0,0}
colors.green 		= {0,255,0}
colors.blue 		= {0,0,255}
colors.yellow 		= {255,255,0}
colors.cyan 		= {0,128,255}

cursors = {}
cursors.arrow 		= love.mouse.getSystemCursor("arrow")
cursors.ibeam 		= love.mouse.getSystemCursor("ibeam")
cursors.wait 		= love.mouse.getSystemCursor("wait")
cursors.waitarrow 	= love.mouse.getSystemCursor("waitarrow")
cursors.crosshair 	= love.mouse.getSystemCursor("crosshair")
cursors.sizeall 	= love.mouse.getSystemCursor("sizeall")
cursors.no 			= love.mouse.getSystemCursor("no")
cursors.hand 		= love.mouse.getSystemCursor("hand")
cursors.sizenesw 	= love.mouse.getSystemCursor("sizenesw")
cursors.sizenwse 	= love.mouse.getSystemCursor("sizenwse")
cursors.sizens 		= love.mouse.getSystemCursor("sizens")
cursors.sizewe 		= love.mouse.getSystemCursor("sizewe")
cursorRequest 		= nil

mouseTable 			= {}
mouseTable.source	= nil
mouseTable.target	= nil
mouseTable.prime	= false
mouseTable.drag		= false
mouseTable.x		= 0
mouseTable._x		= 0
mouseTable.y		= 0
mouseTable._y		= 0
mouseTable.dragImage= nil
mouseTable.
	scrollDistance	= 15
LMB					= 1
RMB					= 2
MMB					= 3
MWU					= 4
MWD					= 5
MWL					= 6
MWR					= 7

icons 				= loadIcons("icons/default")

function love.load(arg)

	--[[ Initial window stuff ]]

	love.window.setMode(1280,720,{	resizable=true,
									vsync=true,
									minwidth=640,
									minheight=480,	})
	LW = love.window
	LG = love.graphics
	LW.setTitle("Katana - preAlpha")
	LG.setBackgroundColor(colors.bg)
	love.keyboard.setKeyRepeat(true)

	--[[ The load status is indicated by a rectangle
		drawn around the window. It indicates to the
		user if the program is busy or not.
		0 = normal
		1 = busy
		2 = succuss
		3 = error                                   ]]

	loadStatus = 0

	--[[ Profiles determine the output resolution. ]]

	profile = {}
	profile.width = 1280
	profile.height = 720
	profile.fps = 30

	--[[ Video loading thread. It takes the path to a
		file to store the video in then loads all of
		the frames for the video and stores them there.]]

	-- videoLoadThread = love.thread.newThread("videoLoadThread.lua")
	-- videoLoadChannel = love.thread.getChannel("videoLoadChannel")
	-- videoLoadControl = love.thread.getChannel("videoLoadControl")
	-- videoLoadThread:start()

	--[[ Window state determines which mode we're in.
		States are: edit, effects, render ...        ]]

	windowState = "edit"

	states = {  edit = State.Edit.make(),
				effects = State.Effects.make(),
				audio = State.Audio.make(),
				render = State.Render.make(), }

	Keybindings.loadBindings()

	--[[ Timers are all automatically updated based on
		the ui refresh rate. First index is the value,
		second is the target, third is the discard flag.]]

	timers = {loadStatus = {0,0}}

end

function getState()
	return states[windowState]
end

function love.draw()

	--[[ Draw the state ]]

		LG.translate(2,2)
		states[windowState]:draw(LG.getWidth()-4, LG.getHeight()-20)
		LG.translate(-2,-2)
	if State.modal and State.modal.draw then
		State.modal:draw()
	end

	--[[ Status bar ]]

	LG.setColor(colors.statusBar)
	LG.rectangle("fill",2,LG.getHeight()-18,LG.getWidth()-4,16)
	LG.setColor(colors.white)
	LG.print("Mode: "..windowState,4,LG.getHeight()-18)

	if mouseTable.dragImage then
		LG.setColor(255,255,255,40)
		LG.draw(mouseTable.dragImage,mouseTable.x,mouseTable.y)
	end

	if loadStatus == 0 then

		LG.setColor(255,255,255,255*(1-timers.loadStatus[1]))
		LG.setLineWidth(2)
		LG.rectangle("line",0,0,LG.getWidth(), LG.getHeight())
		LG.setLineWidth(1)

	end
	if State.contextMenu then
		State.contextMenu:draw()
	end

end

function setLoadStatus(s)

	loadStatus = s or 0

	--[[ Load status indicator ]]

	LG.setColor(255,255,255,128)


	if loadStatus == 0 then
	elseif loadStatus == 1 then
		LG.setColor(255,128,0,255)
		timers.loadStatus[2] = .5
		timers.loadStatus[1] = 0
	elseif loadStatus == 2 then
		LG.setColor(0,255,0,255)
		timers.loadStatus[2] = .5
		timers.loadStatus[1] = 0
	elseif loadStatus == 3 then
		LG.setColor(255,0,0,255)
		timers.loadStatus[2] = .5
		timers.loadStatus[1] = 0
	end

	LG.setLineWidth(2)
	LG.rectangle("line",0,0,LG.getWidth(), LG.getHeight())
	LG.setLineWidth(1)

	LG.present()

end

function love.update(dt)

	--[[ cursor request ]]

	cursorRequest = nil

	--[[ Mouse moved? ]]

	mouseTable._x = mouseTable.x
	mouseTable._y = mouseTable.y
	mouseTable.x, mouseTable.y = love.mouse.getPosition()

	if mouseTable.prime and not mouseTable.drag
	and (mouseTable.x ~= mouseTable._x or mouseTable.y ~= mouseTable._y) then
		mouseTable.drag = true
	end

	--[[ Update timers ]]

	for n,t in pairs(timers) do
		if t[1] < t[2] then
			t[1] = t[1] + dt
		elseif t[1] > t[2] then
			t[1] = t[1] - dt
		end
		if t[3] then t = nil end
	end

	--[[ Update state ]]
	if State.contextMenu then
		if State.contextMenu.update then
			State.contextMenu:update(dt)
		end
		if State.contextMenu.close then
			State.contextMenu = nil
		end
	end
	if State.modal then
		if State.modal.update then
			State.modal:update(dt,2,2)
		end
		if State.modal.close then
			State.modal = nil
		end

	else
		states[windowState]:update(dt,2,2)
	end

	if mouseTable.drag and mouseTable.source then
		cursorRequest = "hand"
	end

	--[[ cursor request ]]

	if cursorRequest then
		love.mouse.setCursor(cursors[cursorRequest])
	else
		love.mouse.setCursor()
	end

end

function love.keypressed(k)

	Keybindings.callBinding(k,love.keyboard.getModifiers())
	if State.modal then
		if State.modal.keypressed then
			State.modal:keypressed(k)
		end
	elseif State.contextMenu then
		State.contextMenu:keypressed(k)
	else
		states[windowState]:keypressed(k)
	end

end

function love.keyreleased(k)

	if State.modal then
		if State.modal.keyreleased then
			State.modal:keyreleased(k)
		end
	else
		states[windowState]:keyreleased(k)
	end

end

function love.mousepressed(x,y,button)

	--[[ Mouse event update for the state ]]

	if x > 1 and x < LG.getWidth() - 1 and y > 1 and y < LG.getHeight() - 18 then
		if State.modal then
			if State.modal.mousepressed then
				State.modal:mousepressed(x-2,y-2,button)
			end
		elseif State.contextMenu then
			State.contextMenu:mousepressed(x-2,y-2,button)
		else
			states[windowState]:mousepressed(x-2,y-2,button)
		end
	end

	if button == LMB then
		mouseTable.prime = true
	end

end

function love.mousereleased(x,y,button)

	if button == LMB then
		mouseTable.prime = false
		mouseTable.drag = false
		-- print("drop off")
	end

	--[[ Mouse event update for the state ]]

	if x > 1 and x < LG.getWidth() - 1 and y > 1 and y < LG.getHeight() - 18 then
		if State.modal then
			if State.modal.mousereleased then
				State.modal:mousereleased(x-2,y-2,button)
			end
		elseif State.contextMenu then
			State.contextMenu:mousereleased(x-2,y-2,button)
		else
			states[windowState]:mousereleased(x-2,y-2,button)
		end
	end

	if button == LMB then
		mouseTable.source = nil
		mouseTable.target = nil
		mouseTable.dragImage = nil
	end

end

function love.wheelmoved(x,y)
	-- if x > 1 and x < LG.getWidth() - 1 and y > 1 and y < LG.getHeight() - 18 then
			-- print("ahahahahah")
		if State.modal then
			if State.modal.wheelmoved then
				State.modal:wheelmoved(x,y)
			end
		else
			if states[windowState].wheelmoved then
				states[windowState]:wheelmoved(x,y)
			end
		end
	-- end
end

function love.mousemoved(x,y)

	if mouseTable.prime then
		mouseTable.drag = true
	end
	-- mouseTable.drag = mouseTable.prime

end

function love.resize(w,h)

	--[[ Notify the state of a window resize ]]

	if not State.modal then
		states[windowState]:resize(w,h)
	else
		if State.modal.resize then
			State.modal:resize(w,h)
		end
	end

end

function love.quit()
	os.execute("rm /tmp/katana/*")
	return false
end
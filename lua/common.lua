Common = {}

-----------------------
-- Enums
-----------------------
-- Placement method
Common.RELATIVE = 1
Common.ABSOLUTE = 2
-- Size method
Common.SHRINK = 1
Common.EXPAND = 2
-- Anchor method
Common.BEGIN = 1
Common.END = 2
Common.CENTER = 3

-----------------------

local Widget = {}
Widget.__index = Widget
Common.Widget = Widget

function Widget.make(props = {})
	local b = {}
	setmetatable(b,Widget)

	b.properties = {
		x = 0,
		y = 0,
		placement = Common.RELATIVE,
		width = 0,
		height = 0,
		widthMethod = Common.SHRINK,
		heightMehod = Common.SHRINK,
		anchor = Common.BEGIN,
		enabled = true,
		visible = true,
		opacity = 1,
		color = {255,255,255},
		background = {0,0,0,255},
		foreground = {255,255,255,255},
		border = 0,
		borderColor = {255,0,0,255},
		radius = 0,
		padding = {0,0,0,0},
	}
	-- add callback handler
	b.actions = {
		mousedown = {},
		mouseup = {},
		
	}

end
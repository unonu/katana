--[[
Okay so we need to check key events
as well as modifiers. Keybindings
table should hold binding combos
]]
Keybindings = {
	
}

Keybindings.callBinding =
function (key, modifiers)
	modifiers = modifiers or {}
	table.sort(modifiers)
	table.insert(modifiers,1,key)
	local combo = table.concat(modifiers,'+')
	if Keybindings[combo] then
		Keybindings[combo]()
	end
end 

Keybindings.checkBinding =
function (key, modifiers)
	table.sort(modifiers)
	local combo = key .. table.concat(modifiers,'+')
	return Keybindings[combo] and true or false
end

Keybindings.setBinding = 
function (callback,key,modifiers)
	modifiers = modifiers or {}
	table.sort(modifiers)
	table.insert(modifiers,1,key)
	local combo = table.concat(modifiers,'+')
	print('bound', combo)
	Keybindings[combo] = callback
end 

Keybindings.loadBindings = 
function (file)
	Keybindings.setBinding(love.event.quit,'q',{'ctrl'})
	Keybindings.setBinding(function () getState():maximize() end,'up',{'ctrl'})
end

love.keyboard.getModifiers =
function ()
	local alt = (love.keyboard.isDown('lalt') or love.keyboard.isDown('ralt')) and 'alt' or nil
	local ctrl = (love.keyboard.isDown('lctrl') or love.keyboard.isDown('rctrl')) and 'ctrl' or nil
	local shift = (love.keyboard.isDown('lshift') or love.keyboard.isDown('rshift')) and 'shift' or nil
	alt = alt and ( alt .. ( (ctrl or shift) and ' ' or '' ) ) or ''
	ctrl = ctrl and ( ctrl .. ( shift and ' ' or '' ) ) or ''
	shift = shift or ''
	print(alt .. ctrl .. shift)
	return ( alt .. ctrl .. shift ):split()
end
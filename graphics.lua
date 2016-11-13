if not orea then orea = {} end

-----------------------------------
--// Custom graphics functions //--
-----------------------------------

--[[ Draws a cool background ]]
function orea.drawBack()
	for i=0, math.floor((screen.width+100)/48) do
	for ii=0, math.floor((screen.height+100)/48) do
		if ((i/2)-math.floor(i/2) > 0 and (ii/2)-math.floor(ii/2) == 0) or ((i/2)-math.floor(i/2) == 0 and (ii/2)-math.floor(ii/2) > 0) then
			love.graphics.setColor(190,190,190)
		else
			love.graphics.setColor(210,210,210)
		end
		love.graphics.rectangle('fill', -50+(i*48)+(((love.mouse.getX())-(screen.width/2))/16),-50+(ii*48)+(((love.mouse.getY())-(screen.height/2))/16),48,48)
	end
	end
end

--[[ Converts a hex colour code to a table ]]
function hexToCol(h)
	return {tonumber(h:sub(2,3),16),
			tonumber(h:sub(4,5),16),
			tonumber(h:sub(6,7),16),}
end

--[[ Makes an extreme colour by pushing away from "m." ]]
function orea.colorExtreme( table,m )
	local t ={}
	for i,v in ipairs(table) do
		if v >= m then t[i] = 255
		else t[i] = 0 end
	end
	return unpack(t)
end

--[[ Draws a dotted line ]]
function love.graphics.stippledLine( x1,y1,x2,y2,l,g )
	-- "l" and "g" are length and gap, respectively
	local ang = math.atan2((y2-y1),(x2-x1))
	local x_dist = math.cos(ang)
	local y_dist = math.sin(ang)
	for i=0, math.floor(((x2-x1)^2+(y2-y1)^2)^.5/(l+g)) do
		love.graphics.line(x1+(i*x_dist*(l+g)),y1+(i*y_dist*(l+g)),x1+(i*x_dist*(l+g))+(x_dist*l),y1+(i*y_dist*(l+g))+(y_dist*l))
	end
end

--[[ Draws an arc/curve without fill ]]
function love.graphics.curve(x,y,r,b,e,s)
	local points = {}
	local step = ((e-b))/s
	for i = 1, (s*2)+2, 2 do
		points[i] = x + math.cos(b+(step*(i-1)/2))*r
		points[i+1] = y + math.sin(b+(step*(i-1)/2))*r
	end
	love.graphics.line(unpack(points))
end

--[[ Load icons ]]

Icon = {}
Icon.__index = Icon

function Icon.new(name,res,x,y,w,h)
	local i = {}
	setmetatable(i,Icon)

	i.name = name
	i.res = res
	i.w, i.h = w, h or w
	i.q = love.graphics.newQuad(x, y, w, h, res:getWidth(), res:getHeight())

	return i
end

function Icon:draw( x,y,w,h, r,ox,oy,kx,ky )
	love.graphics.draw(self.res, self.q, x, y, r or 0, w/self.w, (h or w)/self.h, ox,oy,kx,ky )
end

function loadIcons( path )
	local icons = {}
	local file = io.open(path..'.des', "r")
	icons.__image = love.graphics.newImage(path..'.png')
	for l in file:lines() do
		local name, x, y, w, h =
			l:match("^(%w+)%s*:%s*(%d+)%s*,%s*(%d+)%s*,%s*(%d+)%s*,%s*(%d+)%s*")
		icons[name] = Icon.new(name, icons.__image, x,y,w,h or w)
	end

	return icons
end
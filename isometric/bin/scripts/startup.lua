require 'scripts\\imagemanager'
require 'scripts\\kernel'
require 'scripts\\imgui'

-- State handling functions
function renderFunc(window)
	window:Clear()
	map:draw(window)
	window:SetView(window:GetDefaultView())
	window:Draw(helptext)
	GUIStart()
	
	-- Big red quit button
	if GUIButton(1,"quitbutton.tga",0, 0, true) then kernel.running=false end
	
	
	GUIFinish()
	window:Display()
end

function inputFunc(event)
	if event.Type==sf.Event.KeyPressed then
		if event.Key.Code==sf.Key.A then
			if playerlight then
				lightmap:releaseLight(playerlight)
				playerlight=nil
			else
				playerlight=lightmap:requestLight()
				playerlight:setRadius(128)
				playerlight:setColor(0.75,0.75,0.75)
				playerlight:setPosition(x,y)
			end
		elseif event.Key.Code==sf.Key.S then
			local s=sf.Image()
			s:CopyScreen(window)
			s:SaveToFile("screen.jpg")
		elseif event.Key.Code==sf.Key.L then
			if dungeonlight then
				dungeonlight=false
				lightmap:setAmbient(1,1,1)
			else
				dungeonlight=true
				lightmap:setAmbient(0.25,0.25,0.35)
			end
		elseif event.Key.Code==sf.Key.Escape then
			print("Escape")
			kernel.running=false
		end
	end
	return GUIHandleInput(event)
end

function updateFunc()
	if GUIState.lmbdown then
		-- Calculate vector
		local mousecoords=map:projectMouseCoords(GUIState.mousex, GUIState.mousey, window)
		local vx=mousecoords.x - x
		local vy=mousecoords.y - y
		local len=math.sqrt(vx*vx+vy*vy)
		lastx=x
		lasty=y
		x=x+(vx/len)*8
		y=y+(vy/len)*8
	else
		lastx=x
		lasty=y
	end
	
end

function addFrameTimeFunc(elapsed, percent)
	--print(percent)
	local cx,cy = lastx+percent*(x-lastx), lasty+percent*(y-lasty)
	map:setCenter(cx,cy)
	
	map:removeSprite(otherdudes[1])
	otherdudes[1]:SetWorldPosition(cx,cy)
	map:insertSprite(otherdudes[1])
	if playerlight then playerlight:setPosition(cx,cy) end
end



-----------------------------------------------------------------------------


map=IsometricMap(32,32,32)

-- Floors
for x=0,31,1 do
	for y=0,31,1 do
		map:addFloor(x,y,"tilefloor.tga")
		if randRange(1,100)<20 then
			map:addFloor(x,y,"grassdecal.tga")
		end
	end
end

-- Perimeter wall
for c=1,31,1 do
	map:addLeftWall(c,31,"leftwall.tga")
	map:addLeftWall(c,0,"leftwall.tga")
	map:addRightWall(31,c,"rightwall.tga")
	map:addRightWall(0,c,"rightwall.tga")
end

map:addLeftWall(0,31,"leftcorner.tga")
map:addRightWall(31,0,"rightcorner.tga")

-- Block wall

for x=8,16,1 do
	for y=8,16,1 do
		if x>8 and y>8 then map:addRoof(x,y,"roof.tga",150) end
		if y==16 and x~=8 then map:addLeftWall(x,y,"leftwall.tga") end
		if x==16 and y~=8 then map:addRightWall(x,y,"rightwall.tga") end
		if x==8 and y==16 then map:addLeftWall(x,y,"leftcorner.tga") end
		if x==16 and y==8 then map:addRightWall(x,y,"rightcorner.tga") end
		
		if x==8 and y>8 then map:addRightWall(x,y,"rightwall.tga") end
		if y==8 and x>8 then map:addLeftWall(x,y,"leftwall.tga") end
	end
end



x,y=16*32, 16*32
lastx,lasty=x,y
c=0

-- Set up some dudes

dudeimage=sf.Image()
dudeimage:LoadFromFile("turtledude.tga")

otherdudes={}

for c=1,30,1 do

	otherdudes[c]=IsometricMapSprite()
	otherdudes[c]:SetImage(dudeimage)
	otherdudes[c]:SetOrigin(sf.Vector2f(69,103))
	otherdudes[c]:SetWorldPosition(randRange(0,31)*32, randRange(0,31)*32)
	otherdudes[c]:SetColor(sf.Color(randRange(128,255), randRange(128,255), randRange(128,255)))
	map:insertSprite(otherdudes[c])
end

otherdudes[1]:SetWorldPosition(x,y)

lightmap=map:getLightMap()
lightmap:setAmbient(0.25,0.25,0.35)

-- Give the dude a light
playerlight=lightmap:requestLight()
playerlight:setRadius(128)
playerlight:setColor(0.75,0.75,0.75)
playerlight:setPosition(x,y)

--lightmap:addStaticLightRadius(420,420, 1,0.5,0.35, 128)
lightmap:addStaticLightRadius(6*32,6*32,-1,-1,-1,128)


dungeonlight=true

font=sf.Font()
font:LoadFromFile("c:\\Windows\\Fonts\\arial.ttf")

helptext=sf.Text()
helptext:SetString(sf.String("Controls: Hold LMB to move, press 'a' to toggle player torch\n 's' to screenshot, 'l' to toggle bright ambient light."))
helptext:SetFont(font)
helptext:SetPosition(0,555)
helptext:SetCharacterSize(20)




		

window=sf.RenderWindow(sf.VideoMode(800,600), "Sprite Game")
GUIState.window=window


kernel=CoreKernel()
kernel:setRenderFunc(renderFunc)
kernel:setInputFunc(inputFunc)
kernel:setUpdateFunc(updateFunc)
kernel:setFrameTimeFunc(addFrameTimeFunc)

-- Cache quit button
g_imagemanager:cacheImage("quitbutton.tga")

kernel:run(15,window)

window:Close()
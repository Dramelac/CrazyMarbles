-- Testing out immediate mode GUI stuffs

-- GUI input state
GUIState=
{
	mousex=0,
	mousey=0,
	lmbdown=false,
	
	hotitem=0,
	activeitem=0,
	
	kbditem=0,
	keyentered=0,
	keymodctrl=false,
	keymodshift=false,
	keymodalt=false,
	keychar=0,
	
	window=nil
}

-- First, an input parsing function that turns input events into state that the GUI can consume

function GUIHandleInput(event)
	if event.Type==sf.Event.MouseMoved then
		GUIState.mousex=event.MouseMove.X
		GUIState.mousey=event.MouseMove.Y
	elseif event.Type==sf.Event.MouseButtonPressed then
		if event.MouseButton.Button==sf.Mouse.Left then
			GUIState.lmbdown=true
		end
	elseif event.Type==sf.Event.MouseButtonReleased then
		if event.MouseButton.Button==sf.Mouse.Left then
			GUIState.lmbdown=false
		end
	elseif event.Type==sf.Event.Closed then
		return false
	elseif event.Type==sf.Event.KeyPressed then
		GUIState.keyentered = event.Key.Code
		GUIState.keymodctrl = event.Key.Control
		GUIState.keymodalt = event.Key.Alt
		GUIState.keymodshift = event.Key.Shift
	elseif event.Type==sf.Event.TextEntered then
		GUIState.keychar=event.Text.Unicode
	end
	
	return true
end



-- Functions to start/finish GUI handling

function GUIStart()
	GUIState.hotitem=0
	
	if GUIState.window~=nil then
		GUIState.window:SetView(GUIState.window:GetDefaultView())
	end
end

function GUIFinish()
	if GUIState.lmbdown==false then
		GUIState.activeitem=0
	else
		if GUIState.activeitem == 0 then
			GUIState.activeitem=-1
		end
	end
	
	GUIState.keyentered=0
	GUIState.keychar=0
end




-- Region test
function GUIRegionTest(x,y,w,h)
	if GUIState.mousex < x or GUIState.mousey < y or GUIState.mousex>=x+w or GUIState.mousey >= y+h then return false end
	return true
end

-- Functions defining specific elements
function GUIButton(id, imgname, x, y, active)
	local sprite=sf.Sprite(g_imagemanager:getImage(imgname))
	sprite:SetPosition(x,y)	
	-- Get button image dimensions
	local iw,ih = sprite:GetImage():GetWidth(), sprite:GetImage():GetHeight()
	
	if GUIRegionTest(x,y,iw,ih/4) then
		GUIState.hotitem=id
		if GUIState.activeitem==0 and GUIState.lmbdown==true then
			GUIState.activeitem=id
		end
	end
	
	-- Draw it
	-- Draw order (vertical)
	-- Normal, Hover, Click, Gray
	if active==false then
		-- Draw greyed
		sprite:SetSubRect(sf.IntRect(0,(ih/4)*3, iw, (ih/4)))
	elseif GUIState.hotitem==id then
		if GUIState.activeitem==id then
			-- Draw clicked
			sprite:SetSubRect(sf.IntRect(0,(ih/4)*2, iw, (ih/4)))
			
		else
			-- Draw hover
			sprite:SetSubRect(sf.IntRect(0,(ih/4)*1, iw, (ih/4)))
		end
	else
		-- Draw normal
		sprite:SetSubRect(sf.IntRect(0,0, iw, (ih/4)))
	end
	
	if GUIState.window then GUIState.window:Draw(sprite) end
	
	if GUIState.lmbdown == false and GUIState.hotitem==id and GUIState.activeitem==id then return true end
	return false
end

require 'scripts\\linkedlist'
require 'scripts\\class'

CoreKernel=class(function(a)
	a.reset_loop=false
	a.running=false
	a.oldtime=0
	a.logicupdatecounter=0
	a.logicstep=0
	a.curtime=0
	a.framedelta=0
	a.percentwithintick=0
	a.renderfunc=nil
	a.updatefunc=nil
	a.inputfunc=nil
	a.frametimefunc=nil
	a.curshot=1
	
	a.logframerate=true
	end)
	
function CoreKernel:addFrameTime(elapsed_time, percent_within_tick)
	if self.frametimefunc~=nil then
		self.frametimefunc(elapsed_time, percent_within_tick)
	end
end

function CoreKernel:updateLogic()
	if self.updatefunc~=nil then
		self.updatefunc()
	end
end

function CoreKernel:handleInput(event)
	if self.inputfunc~=nil then
		return self.inputfunc(event)
	end
	
	return true
end

function CoreKernel:render(window)
	if self.renderfunc~=nil then
		self.renderfunc(window)
	end
end

function CoreKernel:endLoop()
	self.running=false
end

function CoreKernel:resetLoop()
	self.reset_loop=true
end

function CoreKernel:setRenderFunc(f)
	self.renderfunc=f
end

function CoreKernel:setInputFunc(f)
	self.inputfunc=f
end

function CoreKernel:setUpdateFunc(f)
	self.updatefunc=f
end

function CoreKernel:setFrameTimeFunc(f)
	self.frametimefunc=f
end

function CoreKernel:run(updates_per_sec, window)	
	local clock=sf.Clock()
	
	self.reset_loop=false
	self.running=true
	self.oldtime=clock:GetElapsedTime()/1000
	self.logicupdatecounter=0
	self.logicstep=1.0/(updates_per_sec)
	self.purgeevents=false
	event=sf.Event()
	
	local thistime=0
	local timesincelastshow=0
	local framecount=0
	local totaltime=0

	
	while(self.running) do
		if(self.reset_loop) then
			self.oldtime=clock:GetElapsedTime()/1000
			self.logicupdatecounter=0
			self.reset_loop=false;
			self.purgeevents=true
		end
		
		-- Process input
		while (window:PollEvent(event)) do
			if self.purgeevents==false then self.running=self:handleInput(event) end
			if self.running==false then return end
		end
		self.purgeevents=false
		
		self.curtime=clock:GetElapsedTime()/1000
		self.framedelta=(self.curtime-self.oldtime)
		totaltime=totaltime+self.framedelta
		thistime=thistime+self.framedelta
		
		-- Update
		--print("update")
		self.logicupdatecounter = self.logicupdatecounter+self.framedelta
		while(self.logicupdatecounter >= self.logicstep) do
			-- Update logic
			self:updateLogic()
			self.logicupdatecounter = self.logicupdatecounter - self.logicstep
			
			if self.logframerate then
				if timesincelastshow==0 then
					timesincelastshow=20
					print("("..math.floor(thistime)..") FPS: "..math.floor(framecount/totaltime).."   Lua mem: "..math.floor(collectgarbage("count")))
					framecount=0
					totaltime=0
					
				else
					timesincelastshow=timesincelastshow-1
				end
			end
			if self.reset_loop then self.logicupdatecounter=0 end
			collectgarbage("step", 4)
		end
		
		-- Render
		self.percentwithintick = self.logicupdatecounter / self.logicstep
		self:addFrameTime(self.framedelta, self.percentwithintick)
		
		self:render(window)
		self.oldtime=self.curtime
		framecount=framecount+1
	end
end

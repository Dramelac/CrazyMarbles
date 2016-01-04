-- Linked list
-- Abstract a linked-list class using Lua tables

require 'scripts\\Class'

LinkedList=class(function(a) a.list=nil end)

function LinkedList.push_front(self, object)
	self.list = {next=self.list, value=object}
end

function LinkedList.push_back(self, object)
	local node=self.list
	if node==nil then
		self.list={next=self.list, value=object}
		return
	else
		while node.next~=nil do
			node=node.next
		end
		node.next={next=nil, value=object}
	end
end

function LinkedList:isEmpty()
	if self.list==nil then return true
	else return false
	end
end

function LinkedList:length()
	local p=self.list
	local count=0
	while p~=nil do
		count=count+1
		p=p.next
	end
	return count
end

function LinkedList.findNode(self, object)
	local prev=nil
	local p=self.list
	local success=false
	
	while p~=nil and success==false do
		if p.value==object then
			success=true
		else
			prev=p
			p=p.next
		end
	end
	return success, p, prev
end

function LinkedList.remove(self, object)
	local success, p, prev = self:findNode(object)
	if success==false then return end
	if prev==nil then
		-- Removing node at front of list
		self.list=self.list.next
	else
		prev.next=p.next
	end
end


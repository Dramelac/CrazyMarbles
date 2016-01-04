-- Simple Image Manager
-- Set up a table that holds references to images and stores a reference count for each one. Images should be obtained and released
-- through this table. When an image's ref count goes to 0, release the entry. Note that just because an entry is released from
-- this manager doesn't mean it is unloaded, necessarily. Some dishonest types might hang onto a reference to the image resource
-- in which case it won't be released until those dishonest ones drop their reference to it. However, if an image is released
-- from the manager but held by dishonest objects, then the same image is requested again, another copy of the image will be loaded,
-- rather than being obtained from the still-existing reference to the old image asset.

require 'scripts\\class'

ImageManager=class(function(a)
	a.images={}
	a.cache={}
end)

function ImageManager:getImage(name)
	if self.images[name]==nil then
		self.images[name]={img=sf.Image(), refcount=0}
		self.images[name].img:LoadFromFile(name)
	end
	
	self.images[name].refcount=self.images[name].refcount+1
	return self.images[name].img
end

function ImageManager:cacheImage(name)
	-- Request an image, bumping the refcount up but not returning a handle to it.
	-- This will keep the image loaded, and can only be released by releaseAllImages
	self:getImage(name)
end

function ImageManager:releaseImage(img)
	local i,j
	for i,j in pairs(self.images) do
		if j.img==img then
			j.refcount=j.refcount-1
			if j.refcount==0 then
				self.images[i]=nil
				return
			end
		end
	end
end

function ImageManager:releaseAllImages()
	self.images={}
end

g_imagemanager=ImageManager()

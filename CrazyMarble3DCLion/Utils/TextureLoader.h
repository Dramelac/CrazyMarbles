#include <irrlicht.h>
#include <iostream>

using namespace irr;

class TextureLoader
{
public:
	static void LoadingTextures(video::IVideoDriver* driver);

    static video::ITexture* tile;
};


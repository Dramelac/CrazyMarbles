#include <irrlicht.h>
#include <iostream>

using namespace irr;
using namespace irr::video;
using namespace irr::scene;

class TextureLoader
{
public:
	static void LoadingTextures(IVideoDriver* driver, ISceneManager* sceneManager);

    static ITexture* tile;
    static ITexture* sphere;

    static IAnimatedMesh* cellMesh;
};


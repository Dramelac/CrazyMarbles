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
    static ITexture* sphereRed;

    static IAnimatedMesh* cellMesh;
    static IAnimatedMesh* cell_pente_Mesh;
    static IAnimatedMesh* cell_angle_Mesh;
    static IAnimatedMesh* cell_angle_int_Mesh;
	static IAnimatedMesh* sphereMesh;
};


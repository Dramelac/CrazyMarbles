#include <irrlicht.h>

using namespace irr;
using namespace video;
using namespace scene;

class TextureLoader
{
public:
	static void LoadingTextures(IVideoDriver* driver, ISceneManager* sceneManager);

    static ITexture* tile;
    static ITexture* sphere;
    static ITexture* sphereRed;
    static ITexture* sphereBlack;
    static ITexture* sphereOrange;
    static ITexture* finish_line;

    static IAnimatedMesh* cellMesh;
    static IAnimatedMesh* cell_pente_Mesh;
    static IAnimatedMesh* cell_angle_Mesh;
    static IAnimatedMesh* cell_angle_int_Mesh;
	static IAnimatedMesh* sphereMesh;
};


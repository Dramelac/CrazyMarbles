#include "TextureLoader.h"


ITexture* TextureLoader::tile;
ITexture* TextureLoader::sphere;

IAnimatedMesh* TextureLoader::cellMesh;
IAnimatedMesh* TextureLoader::sphereMesh;

void TextureLoader::LoadingTextures(IVideoDriver* driver, ISceneManager* sceneManager) {

    tile = driver->getTexture("data/model/cube_tex.png");
    sphere = driver->getTexture("data/model/sphere_c.png");

    cellMesh = sceneManager->getMesh("data/model/cube.3ds");
    sphereMesh = sceneManager->getMesh("data/model/sphere.3ds");

}

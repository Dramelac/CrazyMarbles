#include "TextureLoader.h"


ITexture* TextureLoader::tile;
ITexture* TextureLoader::sphere;

IAnimatedMesh* TextureLoader::cellMesh;
IAnimatedMesh* TextureLoader::cell_pente_Mesh;
IAnimatedMesh* TextureLoader::cell_angle_Mesh;

IAnimatedMesh* TextureLoader::sphereMesh;

void TextureLoader::LoadingTextures(IVideoDriver* driver, ISceneManager* sceneManager) {

    // LOAD every texture / model
    // for recursive use

    tile = driver->getTexture("data/model/cube_tex.png");
    sphere = driver->getTexture("data/model/sphere_c.png");

    cellMesh = sceneManager->getMesh("data/model/cube.3ds");
    cell_pente_Mesh = sceneManager->getMesh("data/model/Cell_pente.3ds");
    cell_angle_Mesh = sceneManager->getMesh("data/model/Cell_angle.3ds");
    sphereMesh = sceneManager->getMesh("data/model/sphere.3ds");

}

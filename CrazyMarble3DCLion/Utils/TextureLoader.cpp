#include "TextureLoader.h"


ITexture* TextureLoader::tile;
ITexture* TextureLoader::sphere;
ITexture* TextureLoader::sphereRed;

IAnimatedMesh* TextureLoader::cellMesh;
IAnimatedMesh* TextureLoader::cell_pente_Mesh;
IAnimatedMesh* TextureLoader::cell_angle_Mesh;
IAnimatedMesh* TextureLoader::cell_angle_int_Mesh;

IAnimatedMesh* TextureLoader::sphereMesh;

void TextureLoader::LoadingTextures(IVideoDriver* driver, ISceneManager* sceneManager) {

    // LOAD every texture / model
    // for recursive use

    tile = driver->getTexture("data/model/cube_tex.png");
    sphere = driver->getTexture("data/model/sphere_c.png");
    sphereRed = driver->getTexture("data/model/sphere_red.png");

    cellMesh = sceneManager->getMesh("data/model/Cell_flat.3ds");
    cell_pente_Mesh = sceneManager->getMesh("data/model/Cell_pente.3ds");
    cell_angle_Mesh = sceneManager->getMesh("data/model/Cell_angle.3ds");
    cell_angle_int_Mesh = sceneManager->getMesh("data/model/Cell_angle_int.3ds");
    sphereMesh = sceneManager->getMesh("data/model/sphere.3ds");

}

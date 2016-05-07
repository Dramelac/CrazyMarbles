//
// Created by mathieu on 07/05/16.
//

#include "BlackMarbles.h"
#include "../Utils/TextureLoader.h"


BlackMarbles::BlackMarbles(ISceneManager *sceneManager) : Entities("BlackMarble", 80) {
    sphereMesh = TextureLoader::sphereMesh;
    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);
    sphere_node->setMaterialTexture(0, TextureLoader::sphereBlack);
    sphere_node->setName(name);
}

BlackMarbles::BlackMarbles(ISceneManager *sceneManager, vector3df position) {
    sphereMesh = TextureLoader::sphereMesh;
    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);
    sphere_node->setMaterialTexture(0, TextureLoader::sphereBlack);
    sphere_node->setName(name);

    sphere_node->setPosition(position);
}


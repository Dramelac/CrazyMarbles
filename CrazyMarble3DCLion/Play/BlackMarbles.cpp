//
// Created by mathieu on 07/05/16.
//

#include "BlackMarbles.h"
#include "../Utils/TextureLoader.h"


BlackMarbles::BlackMarbles(ISceneManager *sceneManager, vector3df position, s32 id) : Entities("BlackMarble", 80)  {
    sphereMesh = TextureLoader::sphereMesh;
    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);
    sphere_node->setMaterialTexture(0, TextureLoader::sphereBlack);
    sphere_node->setName(name);
    sphere_node->setID(id);

    sphere_node->setPosition(position);
}

BlackMarbles::BlackMarbles(IMeshSceneNode *node) {
    sphere_node = node;
    Entities(node->getName(), 80);
}


BlackMarbles::~BlackMarbles() {
    sphere_node->remove();
}
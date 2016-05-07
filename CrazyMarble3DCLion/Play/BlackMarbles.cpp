//
// Created by mathieu on 07/05/16.
//

#include "BlackMarbles.h"
#include "../Utils/TextureLoader.h"


BlackMarbles::BlackMarbles(ISceneManager *sceneManager, vector3df position, s32 id) : Entities("BlackMarble", 80)  {
    sceneMesh = TextureLoader::sphereMesh;
    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);
    sceneNode->setMaterialTexture(0, TextureLoader::sphereBlack);
    sceneNode->setName(name);
    sceneNode->setID(id);

    sceneNode->setPosition(position);
}

BlackMarbles::BlackMarbles(IMeshSceneNode *node) {
    sceneNode = node;
    Entities(node->getName(), 80);
}


BlackMarbles::~BlackMarbles() {
    sceneNode->remove();
}

void BlackMarbles::setPosition(vector3df position) {
    sceneNode->setPosition(position);
}

void BlackMarbles::setPlayer(ISceneManager *sceneManager, Player *player, ITriangleSelector* selector) {
    this->player = player;

    vector3df hitBox = sceneNode->getBoundingBox().MaxEdge;

    animatorPlayerCollisionResponse = sceneManager->createCollisionResponseAnimator(
            selector, // player collision
            sceneNode,  // object player to detect
            hitBox, // hitBox
            vector3df(0, 0, 0)  // gravity vector
    );
    sceneNode->addAnimator(animatorPlayerCollisionResponse); // apply collision to player object
    //animatorFinishCollisionResponse->setCollisionCallback(this);
}
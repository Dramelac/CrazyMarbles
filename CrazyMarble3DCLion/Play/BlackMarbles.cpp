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

void BlackMarbles::setPlayer(ISceneManager *sceneManager, Player *myplayer) {
    this->player = myplayer;

    ITriangleSelector* selector = sceneManager->createTriangleSelector(this->sceneNode->getMesh(), this->sceneNode);
    this->sceneNode->setTriangleSelector(selector);

    animatorPlayerCollisionResponse = player->enableCustomCollision(selector, sceneManager);
    animatorPlayerCollisionResponse->setCollisionCallback(this);
}

bool virtual BlackMarbles::onCollision(const ISceneNodeAnimatorCollisionResponse &animator) {
    
    return false;
}
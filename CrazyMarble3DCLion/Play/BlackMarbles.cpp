//
// Created by mathieu on 07/05/16.
//

#include "BlackMarbles.h"
#include "../Utils/TextureLoader.h"


BlackMarbles::BlackMarbles(ISceneManager *sceneManager, vector3df position, s32 id) : Entities("BlackMarble", 60)  {
    sceneMesh = TextureLoader::sphereMesh;
    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);
    sceneNode->setMaterialTexture(0, TextureLoader::sphereBlack);
    sceneNode->setName(name);
    sceneNode->setID(id);

    sceneNode->setPosition(position);
}

BlackMarbles::BlackMarbles(IMeshSceneNode *node) {
    sceneNode = node;
    Entities(node->getName(), 60);
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

bool BlackMarbles::onCollision(const ISceneNodeAnimatorCollisionResponse &animator) {
    vector3df tempA = player->getPosition();
    std::cout << "A : " << tempA.X << "/" << tempA.Y << "/" << tempA.Z << std::endl;
    vector3df tempB = sceneNode->getPosition();
    std::cout << "B : " << tempB.X << "/" << tempB.Y << "/" << tempB.Z << std::endl;
    vector3df diff = tempB - tempA;
    std::cout << "diff : " << diff.X << "/" << diff.Y << "/" << diff.Z << std::endl << std::endl;
    return false;
}
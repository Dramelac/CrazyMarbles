//
// Created by mathieu on 07/05/16.
//

#include "BlackMarbles.h"
#include "../Utils/TextureLoader.h"

// create object (Level editor)
BlackMarbles::BlackMarbles(ISceneManager *sceneManager, vector3df position, s32 id) : Entities("BlackMarble", 60)  {
    isPlayerSet = false;
    sceneMesh = TextureLoader::sphereMesh;
    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);
    sceneNode->setMaterialTexture(0, TextureLoader::sphereBlack);
    sceneNode->setName(name);
    sceneNode->setID(id);

    sceneNode->setPosition(position);
}

// load object from node (map saving)
BlackMarbles::BlackMarbles(IMeshSceneNode *node) : Entities(node->getName(), 60) {
    sceneNode = node;
    isPlayerSet = false;
    origin = sceneNode->getPosition();

}

// destructor
BlackMarbles::~BlackMarbles() {
    if (isPlayerSet){
        player->removeAnimator(animatorPlayerCollisionResponse);
        animatorCollisionResponse->drop();
    }
    sceneNode->remove();
}

// setup player / enable collision with him
void BlackMarbles::setPlayer(ISceneManager *sceneManager, Player *myplayer) {
    this->player = myplayer;
    isPlayerSet = true;

    ITriangleSelector* selector = sceneManager->createTriangleSelector(this->sceneNode->getMesh(), this->sceneNode);
    this->sceneNode->setTriangleSelector(selector);

    animatorPlayerCollisionResponse = player->enableCustomCollision(selector, sceneManager);
    animatorPlayerCollisionResponse->setCollisionCallback(this);
}

// collision player / dark marble : listener from ICollisionCallback
bool BlackMarbles::onCollision(const ISceneNodeAnimatorCollisionResponse &animator) {
    vector3df tempA = player->getPosition();
    //std::cout << "A : " << tempA.X << "/" << tempA.Y << "/" << tempA.Z << std::endl;
    vector3df tempB = sceneNode->getPosition();
    //std::cout << "B : " << tempB.X << "/" << tempB.Y << "/" << tempB.Z << std::endl;
    vector3df diff = tempB - tempA;
    //std::cout << "diff : " << diff.X << "/" << diff.Y << "/" << diff.Z << std::endl << std::endl;
    //std::cout << "old inertie : " << inertie.X << "/" << inertie.Y << "/" << inertie.Z << std::endl;

    vector3df pInertie = player->getInertie();
    vector3df bang = pInertie + inertie;

    player->setInertie(-pInertie + inertie);


    if (1 > diff.X >= 0) {
        diff.X = 1;
    } else if (0 > diff.X > -1){
        diff.X = -1;
    }
    if (1 > diff.Z >= 0){
        diff.Z = 1;
    } else if (0 > diff.Z > -1){
        diff.Z = -1;
    }

    inertie = (diff * pInertie) + 1;

    u16 dmg = (u16)( (abs((s16) bang.X) + abs((s16)bang.Z)) /100);
    //std::cout << "bang : " << bang.X << "/" << bang.Y << "/" << bang.Z << std::endl<< std::endl;
    //std::cout << dmg << std::endl << std::endl;

    //std::cout << health << std::endl;
    takeDamage(dmg);
    player->takeDamage(dmg);
    //std::cout << health << std::endl<< std::endl;

    //std::cout << "inertie : " << inertie.X << "/" << inertie.Y << "/" << inertie.Z << std::endl<< std::endl;

    return false;
}

void BlackMarbles::moveBLackMarbles(IRandomizer* rand) {
    if (inertie == vector3df(0,0,0)){
        f32 R = 250;

        f32 xprime = R * rand->frand();
        f32 yprime = R - xprime;

        vector3df moveRand (origin.X + xprime,sceneNode->getPosition().Y, origin.Z + yprime);
        objectif = moveRand;
        std::cout << origin.X << "->" << xprime << "/" << origin.Z << "->" << yprime << std::endl;
    }
    objectifToInertie();
}


void BlackMarbles::objectifToInertie() {
    const vector3df* myPos = &sceneNode->getPosition();
    if (objectif.X > myPos->X){
        inertie.X -= 20;
    } else if (objectif.X < myPos->X){
        inertie.X += 20;
    }

    if (objectif.Y > myPos->Y){
        inertie.Y -= 20;
    } else if (objectif.Y < myPos->Y){
        inertie.Y += 20;
    }

    objectif.Y = myPos->Y;
}




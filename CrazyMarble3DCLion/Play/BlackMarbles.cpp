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
        removeAnimator(animatorSelfPlayerCollisionResponse);
        animatorCollisionResponse->drop();
        animatorSelfPlayerCollisionResponse->drop();
    }
    sceneNode->remove();
}

// setup player / enable collision with him
void BlackMarbles::setPlayer(ISceneManager *sceneManager, Player *myplayer) {
    this->player = myplayer;
    isPlayerSet = true;

    // collision anim to player
    ITriangleSelector* selector = this->getSelector(sceneManager);
    animatorPlayerCollisionResponse = player->enableCustomCollision(selector, sceneManager);
    animatorPlayerCollisionResponse->setCollisionCallback(this);
    selector->drop();

    // collision anim to self
    selector = player->getSelector(sceneManager);
    animatorSelfPlayerCollisionResponse = this->enableCustomCollision(selector, sceneManager);
    animatorSelfPlayerCollisionResponse->setCollisionCallback(this);
    selector->drop();

}

// collision player / dark marble : listener from ICollisionCallback
bool BlackMarbles::onCollision(const ISceneNodeAnimatorCollisionResponse &animator) {
    vector3df tempA = player->getPosition();
    vector3df tempB = sceneNode->getPosition();
    vector3df diff = tempB - tempA;

    vector3df pInertie = player->getInertie();
    if (pInertie.X < 15 && pInertie.X > 0) {
        pInertie.X = 15;
    } else if (pInertie.X > -15 && pInertie.X < 0) {
        pInertie.X = -15;
    }

    if (pInertie.Z < 15 && pInertie.Z > 0) {
        pInertie.Z = 15;
    } else if (pInertie.Z > -15 && pInertie.Z < 0) {
        pInertie.Z = -15;
    }

    vector3df bang = pInertie + inertie;

    //player->setInertie(-pInertie + inertie);
    player->setInertie(-(4 * diff)+ inertie);


    inertie = 5 * diff + pInertie;

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
        f32 R = 100;
        // 0 - 1 to -1 to 1
        f32 xprime = R * (rand->frand()*2 - 1);
        f32 yprime = 0;
        if (rand->frand() > 0.5) {
            yprime = R - xprime;
        } else {
            yprime = -1 * (R - xprime);
        }

        vector3df moveRand (origin.X + xprime,sceneNode->getPosition().Y, origin.Z + yprime);
        objectif = moveRand;
        //std::cout << origin.X << "->" << xprime << "/" << origin.Z << "->" << yprime << std::endl;
    }
    objectifToInertie();
}


void BlackMarbles::objectifToInertie() {
    u16 fastUnit = 25;
    u16 count = 0;

    vector3df tempMoving(0,0,0);
    const vector3df* myPos = &sceneNode->getPosition();

    //objectif.Y = myPos->Y;
    if (objectif.X > myPos->X){
        tempMoving.X += fastUnit;
        count++;
    } else if (objectif.X < myPos->X){
        tempMoving.X -= fastUnit;
        count++;
    }

    if (objectif.Z > myPos->Z){
        tempMoving.Z += fastUnit;
        count++;
    } else if (objectif.Z < myPos->Z){
        tempMoving.Z -= fastUnit;
        count++;
    }

    if (count >= 2){
        tempMoving.X /= 2;
        tempMoving.Z /= 2;
    }

    //std::cout << "tempMoving : " << tempMoving.X << "/" << tempMoving.Y << "/" << tempMoving.Z << std::endl;
    inertie += tempMoving;
    //std::cout << "inertie : " << inertie.X << "/" << inertie.Y << "/" << inertie.Z << std::endl;


}




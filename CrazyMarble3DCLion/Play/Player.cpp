//
// Created by mathieu on 05/03/16.
//

#include "Player.h"
#include "../Utils/TextureLoader.h"

// Debug player
Player::Player(ISceneManager *sceneManager, const stringc& name, int health)
        : Entities(name, health), score(0), finishTime(0) {

    // MODEL

    sceneMesh = TextureLoader::sphereMesh;                             // load object sphere

    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);           // add object to screen
    //sceneNode->setScale(vector3df(1.0f,1.0f,1.0f));
    sceneNode->setPosition(vector3df(25.0f,0.0f,25.0f));        // set init player pos (can be change if need)
    //sceneNode->setPosition(vector3df(5*150.0f+50,300.0f,430.0f));

    // we used default texture with model : sphere_c.png
    // to force texture use :
    //sceneNode->setMaterialTexture(0, TextureLoader::sphere);


    // Camera

    fixeCamera = sceneManager->addCameraSceneNode(sceneNode,
                                                  vector3df(800.0f, 700.0f, 800.0f),
                                                  sceneNode->getPosition());

    // Render distance
    // fixeCamera->setFarValue(5000);

}

// Start new game
Player::Player(ISceneManager *sceneManager, const stringc& name, int health, vector3df startpos)
        : Entities(name, health), score(0), finishTime(0) {
    speed = 20;
    inertie = vector3df(0,0,0);

    // MODEL
    startPos = startpos;
    sceneMesh = TextureLoader::sphereMesh;                             // load object sphere

    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);           // add object to screen
    sceneNode->setPosition(startPos);
    sceneNode->setID(10);

    fixeCamera = sceneManager->addCameraSceneNode(sceneNode,
                                                  vector3df(800.0f, 700.0f, 800.0f),
                                                  sceneNode->getPosition());




}

// player Level Editor
Player::Player(ISceneManager *sceneManager) : Entities(), finishTime(0) {
    speed = 20;

    sceneMesh = TextureLoader::sphereMesh;                             // load object sphere

    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);           // add object to screen

    sceneNode->setPosition(vector3df(0,-250,0));
    sceneNode->setScale(vector3df(0.5,0.5,0.5));
    sceneNode->setMaterialTexture(0, TextureLoader::sphereRed);

    fixeCamera = sceneManager->addCameraSceneNode(sceneNode,
                                                  vector3df(1600.0f, 1400.0f, 1600.0f),
                                                  sceneNode->getPosition());
    fixeCamera->setFarValue(15000);
}


Player::~Player() {
    sceneNode->remove();
    fixeCamera->remove();
}

// update camera target (fixe player)
void Player::updateCamera() {
    fixeCamera->setTarget(sceneNode->getPosition());
}

// procces keyboard input -> moving player / update inertie value
void Player::processMoving(KeyboardEvent *keyevent, f32 deltaTime) {
    // Init moving vectorKeyboard
    core::vector3df vectorKeyboard(0,0,0);
    u16 count=0;
    //speed = 20;
    // Min 0 / Max 500

    // Check all key
    if(keyevent->IsKeyDown(KEY_KEY_Z)){
        vectorKeyboard.X += -speed;
        vectorKeyboard.Z += -speed;
        count++;
    }
    if(keyevent->IsKeyDown(KEY_KEY_S)){
        vectorKeyboard.X += speed;
        vectorKeyboard.Z += speed;
        count++;
    }
    if(keyevent->IsKeyDown(KEY_KEY_Q)){
        vectorKeyboard.X += speed;
        vectorKeyboard.Z += -speed;
        count++;
    }
    if(keyevent->IsKeyDown(KEY_KEY_D)){
        vectorKeyboard.X += -speed;
        vectorKeyboard.Z += speed;
        count++;
    }

    if (count == 2){
        vectorKeyboard.X /= 2;
        vectorKeyboard.Z /= 2;
    }
    //cout << vectorKeyboard.X << "/" << vectorKeyboard.Y << "/" << vectorKeyboard.Z << endl;
    // apply keyboard to inertie
    inertie += vectorKeyboard;
    applyMove(deltaTime, 75);
}

// testing fov feature
void Player::updateFOV(f32 x) {
    f32 temp = fixeCamera->getFOV();
    //std::cout << "fov old : " << temp;
    fixeCamera->setFOV(temp + x);
}

// check player falling status (DEPRECATED)
/*bool Player::isFall() {
    if (animatorCollisionResponse->isFalling()){
        fallDistance++;
        if (fallDistance > 50) {
            sceneNode->setPosition(startPos);
            inertie = vector3df(0,0,0);
            animatorCollisionResponse->setGravity(vector3df(0, -20, 0));
            fallDistance = 0;
            return true;
        }
    } else {
        //startPos = animatorCollisionResponse->getCollisionResultPosition();
        //startPos = sceneNode->getPosition();
        fallDistance = 0;
    }
    return false;
}*/

// setup finish line collision (detection end game)
void Player::addFinishLineCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {

    vector3df hitBox = sceneNode->getBoundingBox().MaxEdge;
    hitBox += vector3df(0.1,0.1,0.1);

    animatorFinishCollisionResponse = sceneManager->createCollisionResponseAnimator(
            metaSelector, // Map collision
            sceneNode,  // object player to detect
            hitBox, // hitBox
            vector3df(0, 0, 0)  // gravity vector
    );
    sceneNode->addAnimator(animatorFinishCollisionResponse); // apply collision to player object
    animatorFinishCollisionResponse->setCollisionCallback(this);

}

// collision finish line listener
bool Player::onCollision(const ISceneNodeAnimatorCollisionResponse &animator) {
    finishTime++;
    return false;
}

// check finish line time
bool Player::checkFinish() {
    return finishTime > 20;
}

// get player vector position
vector3df Player::getPosition() {
    return sceneNode->getPosition();
}

void Player::respawn() {
    sceneNode->setPosition(startPos);
    inertie = vector3df(0,0,0);
    animatorCollisionResponse->setGravity(vector3df(0, -20, 0));
    fallDistance = 0;
    finishTime = 0;
    health = 100;
    // To change if need
    score = 0;
}





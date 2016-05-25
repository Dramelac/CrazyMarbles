//
// Created by mathieu on 05/03/16.
//

#include <iostream>
#include "Player.h"
#include "../Utils/TextureLoader.h"

// Debug player
Player::Player(ISceneManager *sceneManager, const stringc& name, int health)
        : Entities(name, health), score(0), enemyKill(0), finishTime(0), isPlayable(false) {

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
Player::Player(ISceneManager *sceneManager, IVideoDriver *driver,IGUIEnvironment *gui, const stringc& name, int health, vector3df startpos, s32 score)
        : Entities(name, health), score(score), enemyKill(0), finishTime(0), isPlayable(true) {

    isNetworkPlayer = false;

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

    displayScore = gui->addStaticText(L"Score : 0",rect<s32>(20,20,220,220));

    hearth = gui->addImage(rect<s32>(vector2d<s32>(100,900),
                                  dimension2d<s32>(100,100)));
    hearth->setImage(driver->getTexture("data/GUI/Menu/play/vie.png"));
    hearth->setUseAlphaChannel(true);
    hearth->setScaleImage(true);

    healthBarBG = gui->addImage(rect<s32>(vector2d<s32>(200,925),
                                       dimension2d<s32>(400,50)),0,104);
    healthBarBG->setImage(driver->getTexture("data/GUI/Menu/play/healthBar-bg.png"));
    healthBarBG->setUseAlphaChannel(true);

    healthBarFG = gui->addImage(rect<s32>(vector2d<s32>(200,925),
                                          dimension2d<s32>(400,50)),0,104);
    healthBarFG->setImage(driver->getTexture("data/GUI/Menu/play/healthBar-fg.png"));
    healthBarFG->setUseAlphaChannel(true);

    lifeCount = gui->addStaticText(L"100%",rect<s32>(vector2d<s32>(15,40),
                                                dimension2d<s32>(70,25)), false, true, hearth);

}
// network player
Player::Player(ISceneManager *sceneManager, const stringc &name, int health, vector3df startpos, s32 score)
    : Entities(name, health), score(score), enemyKill(0), finishTime(0), isPlayable(false) {

    isNetworkPlayer = true;
    speed = 20;
    inertie = vector3df(0,0,0);

    // MODEL
    startPos = startpos;
    sceneMesh = TextureLoader::sphereMesh;                             // load object sphere

    sceneNode = sceneManager->addMeshSceneNode(sceneMesh);           // add object to screen
    sceneNode->setMaterialTexture(0, TextureLoader::sphereOrange);
    sceneNode->setPosition(startPos);
    sceneNode->setID(10);


}

// player Level Editor
Player::Player(ISceneManager *sceneManager) : Entities(), finishTime(0), isPlayable(false) {
    isNetworkPlayer = false;
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
    if (!isNetworkPlayer){
        fixeCamera->remove();
    }
    if (isPlayable){
        displayScore->remove();
        healthBarBG->remove();
        healthBarFG->remove();
        lifeCount->remove();
        hearth->remove();
    }
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

void Player::setGravity(s32 Y) {
    inertie = vector3df(0,0,0);
    if (isPlayable || isNetworkPlayer) {
        animatorCollisionResponse->setGravity(vector3df(0, Y, 0));
    }
}

void Player::addKill() {
    score +=50;
    enemyKill ++;
    updateScore();
}

stringw Player::calculFinal(u32 chrono) {

    u32 bonusEnemy = enemyKill*50;
    u32 bonusTime = chrono * 20;
    u32 bonusLIfe = (u32)this->health*4;

    u32 totalBonus = bonusLIfe+bonusTime;
    score += totalBonus;
    stringw text = L"Score : ";
    text += score;

    stringw resume = L"\t\t\t\t\t\t\t\t\t\t\t\t\t\t YOU WIN ! \n";
    resume += L"\t\t\t\t\t\tEnemyKill : ";
    resume += enemyKill;
    resume += L" * 50 = ";
    resume += bonusEnemy;
    resume += L"\n\t\t\t\tBonusTime : ";
    resume += chrono;
    resume += L" * 20 = ";
    resume += bonusTime;
    resume += L"\n\t\t\t\t\t\tBonusLife : ";
    resume += (u32)this->health;
    resume += L" * 4 = ";
    resume += bonusLIfe;
    resume += L"\n\t\t\t\t\t\t\t\t\tYour score : ";
    resume +=score;

    displayScore->setText(text.c_str());
    //std::cout<<chrono<<" "<<this->health<<" "<<score<<std::endl;
    return resume ;

}

void Player::updateScore() {

    stringw text = L"Score : ";
    text += score;
    displayScore->setText(text.c_str());
}

void Player::updateGui() {

    stringw tempTexte = L"";
    tempTexte += health ;
    tempTexte += "%";
    lifeCount->setText(tempTexte.c_str());
    lifeCount->setRelativePosition(rect<s32>(vector2d<s32>(20,40),
                                             dimension2d<s32>(70,25)));

    f32 tempSize = 400 * health/100;
    healthBarFG->setRelativePosition(rect<s32>(vector2d<s32>(200,925),
                                               dimension2d<f32>(tempSize,50)));
}

void Player::takeDamage(u64 dmg) {
    Entities::takeDamage(dmg);
    updateGui();
}

s32 Player::getScore() const {
    return score;
}

void Player::respawn() {
   setPosition(startPos);
   //animatorCollisionResponse->setGravity(vector3df(0, -20, 0));
   fallDistance = 0;
   finishTime = 0;
   health = 100;

}


void Player::setPosition(vector3df position) {
    setGravity(0);
    Entities::setPosition(position);
    setGravity(-20);
}
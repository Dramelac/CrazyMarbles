//
// Created by mathieu on 03/03/16.
//


#include "Entities.h"

Entities::Entities(const stringc &name, s32 health) : name(name), health(health), fallDistance(0) { }


Entities::Entities() : name(""), health(1), fallDistance(0) { }

// enable map collision
void Entities::enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {
    // Animation collision

    vector3df hitbox = sceneNode->getBoundingBox().MaxEdge;

    animatorCollisionResponse = sceneManager->createCollisionResponseAnimator(
            metaSelector, // Map collision
            sceneNode,  // object player to detect
            hitbox, // hitbox
            vector3df(0, -20, 0)  // gravity vector
    );
    sceneNode->addAnimator(animatorCollisionResponse);             // apply gravity / collision to player object
}

// moving process with inertie
void Entities::applyMove(f32 deltaTime, u16 level) {

    u16 deceleration = 10;
    u16 maxSpeed = 500;

    // Deceleration naturel
    if (inertie.X > 0){
        inertie.X -= deceleration;
        if (inertie.X < 0) inertie.X = 0;
    } else if (inertie.X < 0) {
        inertie.X += deceleration;
        if (inertie.X > 0) inertie.X = 0;
    }
    if (inertie.X > maxSpeed) {
        inertie.X = maxSpeed;
    }else if (inertie.X < -maxSpeed){
        inertie.X = -maxSpeed;
    }

    if (inertie.Z > 0){
        inertie.Z -= deceleration;
        if (inertie.Z < 0) inertie.Z = 0;
    } else if (inertie.Z < 0) {
        inertie.Z += deceleration;
        if (inertie.Z > 0) inertie.Z = 0;
    }
    if (inertie.Z > maxSpeed) {
        inertie.Z = maxSpeed;
    } else if (inertie.Z < -maxSpeed){
        inertie.Z = -maxSpeed;
    }

    inertie.Y = 0;
    vector3df toMove = inertie * deltaTime;
    toMove.Y = -7;
    //std::cout << "inertie : " << inertie.X << "/" << inertie.Y << "/" << inertie.Z << std::endl;
    //std::cout << "toMove : " << toMove.X << "/" << toMove.Y << "/" << toMove.Z << std::endl<< std::endl;
    updatePosition(toMove);

    isFall(level);
}

// update current entity position
void Entities::updatePosition(vector3df vec) {
    sceneNode->setPosition(sceneNode->getPosition()+vec);
}

// setup new pos (TP / respawn)
void Entities::setPosition(vector3df position) {
    sceneNode->setPosition(position);
}

// get inertie vector
const vector3df &Entities::getInertie() const {
    return inertie;
}

// check entity alive status
bool Entities::isAlive() {
    return health > 0;
}

// loose health point (damage)
void Entities::takeDamage(u64 dmg) {
    health -= dmg;
}

// set inertie vector
void Entities::setInertie(const vector3df &inertie) {
    Entities::inertie = inertie;
}

// falling damage process
bool Entities::isFall(u16 level) {
    if (animatorCollisionResponse->isFalling()){
        fallDistance++;
        if (fallDistance > level) {
            health = 0;
            //std::cout << "dead" << std::endl;
            return true;
        }
    } else {
        if (fallDistance > 20) {
            //std::cout << fallDistance << " / " << u64(pow(fallDistance/7,2)) << std::endl;
            takeDamage(u64(pow(fallDistance/7,2)));
            //std::cout << health << std::endl << std::endl;
        }
        fallDistance = 0;
    }
    return false;
}

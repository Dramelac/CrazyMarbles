//
// Created by mathieu on 03/03/16.
//

#include "Entities.h"

Entities::Entities(const stringc &name, int health) : name(name), health(health) { }


Entities::Entities() : name(""), health(1) { }

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

void Entities::applyMove(f32 deltaTime) {

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
}


void Entities::updatePosition(vector3df vec) {
    sceneNode->setPosition(sceneNode->getPosition()+vec);
}

const vector3df &Entities::getInertie() const {
    return inertie;
}

bool Entities::isAlive() {
    return health > 0;
}

void Entities::takeDamage(u16 dmg) {
    health -= dmg;
}

void Entities::setInertie(const vector3df &inertie) {
    Entities::inertie = inertie;
}
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
    //anim->drop();                               // drop temp anim
}


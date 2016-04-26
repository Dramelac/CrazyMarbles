//
// Created by mathieu on 05/03/16.
//

#include "Player.h"
#include "../Utils/TextureLoader.h"

Player::Player(const string &name, int health, ISceneManager *sceneManager) : Entities(name, health), score(0) {

    // MODEL

    sphereMesh = TextureLoader::sphereMesh;                             // load object sphere

    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);           // add object to screen
    //sphere_node->setScale(core::vector3df(1.0f,1.0f,1.0f));
    sphere_node->setPosition(core::vector3df(25.0f,300.0f,25.0f));        // set init player pos (can be change if need)
    //sphere_node->setPosition(core::vector3df(5*150.0f+50,300.0f,430.0f));

    // we used default texture with model : sphere_c.png
    // to force texture use :
    //sphere_node->setMaterialTexture(0, TextureLoader::sphere);


}

void Player::enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {

    // Animation collision
    ISceneNodeAnimatorCollisionResponse* anim = sceneManager->createCollisionResponseAnimator(
            metaSelector, // Map collision
            sphere_node,  // object player to detect
            core::vector3df(1.0f,1.0f,1.0f), // hitbox
            core::vector3df(0, -10, 0)  // gravity vector
    );
    sphere_node->addAnimator(anim);             // apply gravity / collision to player object
    anim->drop();                               // drop temp anim

}


IMeshSceneNode *Player::getSphere_node() const {
    return sphere_node;
}


core::vector3df Player::getPosition() {
    return sphere_node->getPosition();
}

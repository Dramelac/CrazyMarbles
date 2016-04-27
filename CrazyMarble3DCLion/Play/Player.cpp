//
// Created by mathieu on 05/03/16.
//

#include "Player.h"
#include "../Utils/TextureLoader.h"


Player::Player(const std::string &name, int health, ISceneManager *sceneManager) : Entities(name, health), score(0) {

    // MODEL

    sphereMesh = TextureLoader::sphereMesh;                             // load object sphere

    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);           // add object to screen
    //sphere_node->setScale(vector3df(1.0f,1.0f,1.0f));
    sphere_node->setPosition(vector3df(25.0f,30.0f,25.0f));        // set init player pos (can be change if need)
    //sphere_node->setPosition(vector3df(5*150.0f+50,300.0f,430.0f));

    // we used default texture with model : sphere_c.png
    // to force texture use :
    //sphere_node->setMaterialTexture(0, TextureLoader::sphere);


    // Camera

    fixeCamera = sceneManager->addCameraSceneNode(0, vector3df(50.0f,150.0f,50.0f), sphere_node->getPosition());

    // Render distance
    // fixeCamera->setFarValue(5000);

}

void Player::enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {

    // Animation collision

    ISceneNodeAnimatorCollisionResponse* anim = sceneManager->createCollisionResponseAnimator(
            metaSelector, // Map collision
            sphere_node,  // object player to detect
            vector3df(1.0f,1.0f,1.0f), // hitbox
            vector3df(5, -15, 5)  // gravity vector
    );
    sphere_node->addAnimator(anim);             // apply gravity / collision to player object
    anim->drop();                               // drop temp anim

}


void Player::updateCamera() {

    vector3df cameraPos = sphere_node->getPosition();
    cameraPos += vector3df(800.0f, 700.0f, 800.0f);
    fixeCamera->setPosition(cameraPos);
    fixeCamera->setTarget(sphere_node->getPosition());

}


void Player::updatePosition(vector3df vec) {
    sphere_node->setPosition(sphere_node->getPosition()+vec);
}


void Player::updateFOV(f32 x) {
    f32 temp = fixeCamera->getFOV();
    std::cout << "fov old : " << temp;
    fixeCamera->setFOV(temp + x);
    std::cout << "/ fov now : " << temp + x << endl;
}

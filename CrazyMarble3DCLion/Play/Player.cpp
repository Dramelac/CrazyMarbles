//
// Created by mathieu on 05/03/16.
//

#include "Player.h"
#include "../Utils/TextureLoader.h"

// Debug player
Player::Player(ISceneManager *sceneManager, const std::string &name, int health)
        : Entities(name, health), score(0), fallDistance(0) {

    // MODEL

    sphereMesh = TextureLoader::sphereMesh;                             // load object sphere

    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);           // add object to screen
    //sphere_node->setScale(vector3df(1.0f,1.0f,1.0f));
    sphere_node->setPosition(vector3df(25.0f,0.0f,25.0f));        // set init player pos (can be change if need)
    //sphere_node->setPosition(vector3df(5*150.0f+50,300.0f,430.0f));

    // we used default texture with model : sphere_c.png
    // to force texture use :
    //sphere_node->setMaterialTexture(0, TextureLoader::sphere);


    // Camera

    fixeCamera = sceneManager->addCameraSceneNode(sphere_node,
                                                  vector3df(800.0f, 700.0f, 800.0f),
                                                  sphere_node->getPosition());

    // Render distance
    // fixeCamera->setFarValue(5000);

}

// Start new game
Player::Player(ISceneManager *sceneManager, const std::string &name, int health, Board *board)
        : Entities(name, health), score(0), fallDistance(0) {

    // MODEL

    sphereMesh = TextureLoader::sphereMesh;                             // load object sphere

    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);           // add object to screen
    sphere_node->setPosition(board->getStartPoint());
    sphere_node->setID(10);

    fixeCamera = sceneManager->addCameraSceneNode(sphere_node,
                                                  vector3df(800.0f, 700.0f, 800.0f),
                                                  sphere_node->getPosition());


}

// player Level Editor
Player::Player(ISceneManager *sceneManager) : Entities(), fallDistance(0) {

    sphereMesh = TextureLoader::sphereMesh;                             // load object sphere

    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);           // add object to screen

    sphere_node->setPosition(vector3df(0,-250,0));
    sphere_node->setScale(vector3df(0.5,0.5,0.5));
    sphere_node->setMaterialTexture(0, TextureLoader::sphereRed);

    fixeCamera = sceneManager->addCameraSceneNode(sphere_node,
                                                  vector3df(1600.0f, 1400.0f, 1600.0f),
                                                  sphere_node->getPosition());
    fixeCamera->setFarValue(15000);
}


Player::~Player() {
    sphere_node->remove();
    fixeCamera->remove();
}


void Player::enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {

    // Animation collision

    vector3df hitbox = sphere_node->getBoundingBox().MaxEdge;

    animatorCollisionResponse = sceneManager->createCollisionResponseAnimator(
            metaSelector, // Map collision
            sphere_node,  // object player to detect
            hitbox, // hitbox
            vector3df(0, -20, 0)  // gravity vector
    );
    sphere_node->addAnimator(animatorCollisionResponse);             // apply gravity / collision to player object
    //anim->drop();                               // drop temp anim

}


void Player::updateCamera() {
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

void Player::setPosition(vector3df pos) {
    sphere_node->setPosition(pos);
}

bool Player::isFall() {
    if (animatorCollisionResponse->isFalling()){
        fallDistance++;
        //std::cout << fallDistance << std::endl;
        if (fallDistance >= 70) {
            sphere_node->setPosition(lastPos);
            return false;
        }
    } else {
        //lastPos = animatorCollisionResponse->getCollisionResultPosition();
        lastPos = sphere_node->getPosition();
        fallDistance = 0;
    }
    return false;
}




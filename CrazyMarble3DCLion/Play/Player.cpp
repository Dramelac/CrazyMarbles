//
// Created by mathieu on 05/03/16.
//

#include "Player.h"
#include "../Utils/TextureLoader.h"

Player::Player(const string &name, int health, scene::ISceneManager *sceneManager) : Entities(name, health), score(0) {

    // MODEL

    sphereMesh = TextureLoader::sphereMesh;                             // load object sphere

    sphere_node = sceneManager->addMeshSceneNode(sphereMesh);           // add object to screen
    //sphere_node->setScale(core::vector3df(1.0f,1.0f,1.0f));
    sphere_node->setPosition(core::vector3df(25.0f,0.0f,25.0f));        // set init player pos (can be change if need)

    // we used default texture with model : sphere_c.png
    // to force texture use :
    //sphere_node->setMaterialTexture(0, TextureLoader::sphere);

}


/*
void Player::move(const Position position) {
	this->position.Move(&position);
}

void Player::renderPlayer(RenderWindow *windows) {
	windows->draw(circle);
}

Vector2f Player::getPosition() {
	return position.getVector();
}
*/
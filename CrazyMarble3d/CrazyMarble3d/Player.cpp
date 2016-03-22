//
// Created by mathieu on 05/03/16.
//

#include "Player.h"

Player::Player(const string &name, int health, scene::ISceneManager *sceneManager) : Entities(name, health), score(0) {
	irr::scene::IAnimatedMeshSceneNode* sphere =        // cree un scene node nomme sphere
		sceneManager->addAnimatedMeshSceneNode(          // via le scene manager
			sceneManager->getMesh("earth.x"),              // en chargeant le mesh "earth.x"
			nullptr, -1,                                          // pas de parent, pas d'ID
			irr::core::vector3df(0.0f, 0.0f, 25.0f),        // position de la sphere
			irr::core::vector3df(0.0f, 0.0f, 0.0f),         // rotation
			irr::core::vector3df(15.0f, 15.0f, 15.0f));     // echelle
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
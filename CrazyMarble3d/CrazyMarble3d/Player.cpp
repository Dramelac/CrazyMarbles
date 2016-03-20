//
// Created by mathieu on 05/03/16.
//

#include "Player.h"

Player::Player(const string &name, int health) : Entities(name, health), score(0) {

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
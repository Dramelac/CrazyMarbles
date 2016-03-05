//
// Created by mathieu on 05/03/16.
//

#include "Player.hpp"

Player::Player(const string &name, int health) : Entities(name, health), score(0) {
    circle.setFillColor(Color::Blue);
    circle.setRadius(5);
    circle.setPosition(position.getVector());
}

Player::Player(const string &name, int health, const Position &position) : Entities(position, name, health),
                                                                                      score(0) {
    circle.setFillColor(Color::Blue);
    circle.setRadius(5);
    circle.setPosition(this->position.getVector());
}

void Player::move(const Position position) {
    this->position.Move(&position);
    circle.setPosition(this->position.getVector());
}

void Player::renderPlayer(RenderWindow *windows) {
    windows->draw(circle);
}

Vector2f Player::getPosition() {
    return position.getVector();
}

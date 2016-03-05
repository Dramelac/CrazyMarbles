//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <SFML/Graphics.hpp>
#include "Entities.hpp"
using namespace sf;

class Player : Entities {
private:
    int score;
    CircleShape circle;

public:
    Player(const string &name, int health);
    Player(const string &name, int health, const Position &position);

    void move(const Position position);
    void renderPlayer(RenderWindow *windows);
    Vector2f getPosition();

};


#endif //CRAZYMARBLE_PLAYER_HPP

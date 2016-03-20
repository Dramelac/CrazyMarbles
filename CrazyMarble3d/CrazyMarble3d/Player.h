//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

//#include <SFML/Graphics.hpp>
#include "Entities.h"
#include <iostream>
//using namespace sf;
using namespace std;

class Player : Entities {
private:
	int score;

public:
	Player(const string &name, int health);
	/*
	void move(const Position position);
	void renderPlayer(RenderWindow *windows);
	Vector2f getPosition();
	*/
};


#endif //CRAZYMARBLE_PLAYER_HPP

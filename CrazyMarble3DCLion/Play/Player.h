//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include "Entities.h"
#include <irrlicht.h>

#include <iostream>

using namespace std;
using namespace irr;

class Player : Entities {
private:
	int score;

public:

	Player(const string &name, int health, scene::ISceneManager *sceneManager );
	
	/*
	void move(const Position position);
	void renderPlayer(RenderWindow *windows);
	Vector2f getPosition();
	*/
};


#endif //CRAZYMARBLE_PLAYER_HPP

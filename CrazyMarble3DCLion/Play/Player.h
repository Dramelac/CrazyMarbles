//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <irrlicht.h>
#include <iostream>
#include "Entities.h"

using namespace std;
using namespace irr;

class Player : Entities {
private:
	scene::IAnimatedMesh* sphereMesh;
	scene::IMeshSceneNode* sphere_node;

	int score;

public:

	Player(const string &name, int health, scene::ISceneManager *sceneManager, video::IVideoDriver* driver);
	
	/*
	void move(const Position position);
	void renderPlayer(RenderWindow *windows);
	Vector2f getPosition();
	*/
};


#endif //CRAZYMARBLE_PLAYER_HPP

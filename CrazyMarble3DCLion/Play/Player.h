//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <string>
#include "Entities.h"

#include <irrlicht.h>

using namespace std;
using namespace irr;

class Player : Entities {
private:
	scene::IAnimatedMesh* sphereMesh;
	scene::IMeshSceneNode* sphere_node;

	int score;

public:

	Player(const std::string &name, int health, scene::ISceneManager *sceneManager);
	
	/*
	void move(const Position position);
	void renderPlayer(RenderWindow *windows);
	Vector2f getPosition();
	*/
};


#endif //CRAZYMARBLE_PLAYER_HPP

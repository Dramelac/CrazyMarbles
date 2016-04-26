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
using namespace irr::scene;

class Player : Entities {
private:
	IAnimatedMesh* sphereMesh;
	IMeshSceneNode* sphere_node;

	int score;

public:

	Player(const std::string &name, int health, ISceneManager *sceneManager);
	void enableCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);


	IMeshSceneNode * getSphere_node() const;
	core::vector3df getPosition();
};


#endif //CRAZYMARBLE_PLAYER_HPP

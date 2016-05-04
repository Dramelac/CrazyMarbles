//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <string>
#include <irrlicht.h>

#include "../Utils/TextureLoader.h"
#include "Entities.h"

using namespace std;
using namespace irr;
using namespace scene;
using namespace core;

class Player : Entities {
private:
	IAnimatedMesh* sphereMesh;
	IMeshSceneNode* sphere_node;

	ICameraSceneNode* fixeCamera;

	int score;

public:

	Player(const std::string &name, int health, ISceneManager *sceneManager);
	void enableCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
	void updatePosition(vector3df vec);
	void updateCamera();

	void updateFOV(f32 x);
};


#endif //CRAZYMARBLE_PLAYER_HPP

//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <string>
#include <irrlicht.h>

#include "Entities.h"
#include "../Plateau/Board.h"

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

	Player(ISceneManager *sceneManager, const std::string &name, int health);
	Player(ISceneManager *sceneManager, const std::string &name, int health, Board* board);
    Player(ISceneManager *sceneManager);
    ~Player();

    void enableCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
	void updatePosition(vector3df vec);
	void setPosition(vector3df pos);
	void updateCamera();

	void updateFOV(f32 x);
};


#endif //CRAZYMARBLE_PLAYER_HPP

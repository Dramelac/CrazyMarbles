//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <string>
#include <irrlicht.h>

#include "Entities.h"
#include "../Plateau/Board.h"

using namespace irr;
using namespace scene;
using namespace core;

class Player : public Entities, public ICollisionCallback {
private:
	IAnimatedMesh* sphereMesh;
	IMeshSceneNode* sphere_node;

	ICameraSceneNode* fixeCamera;

    ISceneNodeAnimatorCollisionResponse* animatorCollisionResponse;
    ISceneNodeAnimatorCollisionResponse* animatorFinishCollisionResponse;

    u32 finishTime;
    u32 fallDistance;
    vector3df startPos;

	s32 score;

public:

	Player(ISceneManager *sceneManager, const std::string &name, int health);
	Player(ISceneManager *sceneManager, const std::string &name, int health, Board* board);
    Player(ISceneManager *sceneManager);
    ~Player();

    void enableCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
    void addFinishLineCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
	bool isFall();

    void updatePosition(vector3df vec);
	void setPosition(vector3df pos);
	void updateCamera();

	void updateFOV(f32 x);

    virtual bool onCollision(const ISceneNodeAnimatorCollisionResponse& animator);
    bool checkFinish();

};


#endif //CRAZYMARBLE_PLAYER_HPP

//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <string>
#include <irrlicht.h>

#include "Entities.h"
#include "../Utils/KeyboardEvent.h"

using namespace irr;
using namespace scene;
using namespace core;

class Player : public Entities, public ICollisionCallback {
private:

	ICameraSceneNode* fixeCamera;

    ISceneNodeAnimatorCollisionResponse* animatorFinishCollisionResponse;

    u32 finishTime;
    u32 fallDistance;
    vector3df startPos;

	s32 score;

    vector3df inertie;
    u16 speed;

public:

	Player(ISceneManager *sceneManager, const stringc& name, int health);
	Player(ISceneManager *sceneManager, const stringc& name, int health, vector3df startpos);
    Player(ISceneManager *sceneManager);
    ~Player();

    void addFinishLineCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
	bool isFall();

    void processMoving(KeyboardEvent *keyevent, f32 deltaTime);
    void updatePosition(vector3df vec);
	void setPosition(vector3df pos);
	void updateCamera();

	void updateFOV(f32 x);

    ISceneNodeAnimatorCollisionResponse* enableCustomCollision(ITriangleSelector *metaSelector, ISceneManager *sceneManager);
    vector3df getPosition();

    virtual bool onCollision(const ISceneNodeAnimatorCollisionResponse& animator);
    bool checkFinish();

};


#endif //CRAZYMARBLE_PLAYER_HPP

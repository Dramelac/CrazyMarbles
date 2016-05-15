//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE_PLAYER_HPP
#define CRAZYMARBLE_PLAYER_HPP

#include <string>
#include <irrlicht.h>

#include "Entities.h"
#include "../Utils/KeyboardEvent.h"
#include "../Utils/Chrono.h"


class Player : public Entities, public ICollisionCallback {
private:

	ICameraSceneNode* fixeCamera;

    ISceneNodeAnimatorCollisionResponse* animatorFinishCollisionResponse;

    u32 finishTime;
    vector3df startPos;

	s32 score;
    IGUIStaticText* displayScore;

    u16 speed;
	void updateScore();


public:

	Player(ISceneManager *sceneManager, const stringc& name, int health);
	Player(ISceneManager *sceneManager,IGUIEnvironment* gui, const stringc& name, int health, vector3df startpos);
    Player(ISceneManager *sceneManager);
    ~Player();

    void addFinishLineCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
	//virtual bool isFall();
	void respawn();

    void processMoving(KeyboardEvent *keyevent, f32 deltaTime);
	void updateCamera();

	void updateFOV(f32 x);

    vector3df getPosition();

	void addKill();
	void calculFinal(u32 chrono);

    virtual bool onCollision(const ISceneNodeAnimatorCollisionResponse& animator);
    bool checkFinish();

};


#endif //CRAZYMARBLE_PLAYER_HPP

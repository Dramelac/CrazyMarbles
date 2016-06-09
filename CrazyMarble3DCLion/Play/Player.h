//
// Created by mathieu on 05/03/16.
//

#ifndef CRAZYMARBLE3D_PLAYER_HPP
#define CRAZYMARBLE3D_PLAYER_HPP


#include "Entities.h"
#include "../Utils/KeyboardEvent.h"
#include "../Utils/Chrono.h"


using namespace gui;
using namespace video;

class Player : public Entities, public ICollisionCallback {
private:

	ICameraSceneNode* fixeCamera;

    ISceneNodeAnimatorCollisionResponse* animatorFinishCollisionResponse;

	IGUIImage* hearth;
	u32 enemyKill ;
    u32 finishTime;
    vector3df startPos;

	s32 score;
    IGUIStaticText* displayScore;
    bool isPlayable;
    bool isNetworkPlayer;

    IGUIImage* healthBarBG;
    IGUIImage* healthBarFG;
    IGUIStaticText* lifeCount;
    u16 speed;


public:

	Player(ISceneManager *sceneManager, const stringc& name, int health);
	Player(ISceneManager *sceneManager, IVideoDriver *driver,IGUIEnvironment *gui, const stringc& name, int health, vector3df startpos, s32 score=0);
	Player(ISceneManager *sceneManager, const stringc& name, int health, vector3df startpos, s32 score=0);



	Player(ISceneManager *sceneManager);
    ~Player();


    void addFinishLineCollision(IMetaTriangleSelector* metaSelector, ISceneManager *sceneManager);
	//virtual bool isFall();
	void setGravity(s32 Y=-20);
    virtual void takeDamage(u64 dmg);

    void processMoving(KeyboardEvent *keyevent, f32 deltaTime);
	void updateCamera();

	void updateFOV(f32 x);

    vector3df getPosition();

	void addKill();
	stringw calculFinal(u32 chrono);
    void updateScore();

    virtual bool onCollision(const ISceneNodeAnimatorCollisionResponse& animator);
    bool checkFinish();

    void respawn();
	virtual void setPosition(vector3df position);


	s32 getScore() const;
    void updateGui();
};


#endif //CRAZYMARBLE3D_PLAYER_HPP

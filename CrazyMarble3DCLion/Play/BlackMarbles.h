//
// Created by mathieu on 07/05/16.
//

#ifndef CRAZYMARBLE3DCLION_BLACKMARBLES_H
#define CRAZYMARBLE3DCLION_BLACKMARBLES_H

#include <irrlicht.h>
#include "Entities.h"
#include "Player.h"

using namespace irr;
using namespace scene;
using namespace core;

class BlackMarbles : public Entities, public ICollisionCallback {

private:
    Player* player;
    bool isPlayerSet;
    ISceneNodeAnimatorCollisionResponse* animatorPlayerCollisionResponse;

public:
    BlackMarbles(ISceneManager *sceneManager, vector3df position, s32 id);
    BlackMarbles(IMeshSceneNode * node);
    virtual ~BlackMarbles();

    void setPlayer(ISceneManager *sceneManager, Player *myplayer);

    virtual bool onCollision(const ISceneNodeAnimatorCollisionResponse &animator);

};


#endif //CRAZYMARBLE3DCLION_BLACKMARBLES_H

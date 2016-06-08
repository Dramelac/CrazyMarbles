//
// Created by mathieu on 07/05/16.
//

#ifndef CRAZYMARBLE3D_BLACKMARBLES_H
#define CRAZYMARBLE3D_BLACKMARBLES_H

#include "Entities.h"
#include "Player.h"
#include <IRandomizer.h>


class BlackMarbles : public Entities, public ICollisionCallback {

private:

    vector3df origin;
    vector3df objectif;

    Player* player;
    bool isPlayerSet;
    ISceneNodeAnimatorCollisionResponse* animatorPlayerCollisionResponse;
    ISceneNodeAnimatorCollisionResponse* animatorSelfPlayerCollisionResponse;
    void objectifToInertie();

public:
    BlackMarbles(ISceneManager *sceneManager, vector3df position, s32 id);
    BlackMarbles(IMeshSceneNode * node);
    virtual ~BlackMarbles();

    void setPlayer(ISceneManager *sceneManager, Player *myplayer, bool playerActif=true);

    void moveBLackMarbles(IRandomizer* rand);

    virtual bool onCollision(const ISceneNodeAnimatorCollisionResponse &animator);

};


#endif //CRAZYMARBLE3D_BLACKMARBLES_H

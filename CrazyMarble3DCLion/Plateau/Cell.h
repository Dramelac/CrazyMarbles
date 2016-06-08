//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_CELL_HPP
#define TESTISO_CELL_HPP

#include <irrlicht.h>
#include "../Play/BlackMarbles.h"

using namespace irr;
using namespace core;
using namespace scene;

class Cell {
private:
    IAnimatedMesh* cellMesh;
    IMeshSceneNode* cell_node;
    bool isSet;
    bool isFinisCell;
    s32 currentLevel;

    bool isEntitySet;
    BlackMarbles* entity;

public:
    Cell();
    virtual ~Cell();

    void setCell(IMeshSceneNode* node);
    void setup(ISceneManager *sceneManager,
               vector3di cursor,
               s16 type=0, vector3di rotation=vector3di(0, 0, 0));


    ITriangleSelector* getSelector(ISceneManager *sceneManager, bool filterFinish = false);

    s32 getCurrentLevel(s32 cursorZ);
    void switchFinishType();

    void setEntity(BlackMarbles *enemie);
    void setEntity(IMeshSceneNode *node);
    void switchEntity(BlackMarbles *enemie);

    void enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager);
    void updateEntityMoving(f32 deltaTime,IRandomizer *rand);

    void setupPlayerToEntity(ISceneManager *sceneManager, Player* player, bool activePlayer=true);

    BlackMarbles * getEntity() const;

    static const float size;
};


#endif //TESTISO_CELL_HPP

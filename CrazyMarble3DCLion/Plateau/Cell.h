//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_CELL_HPP
#define TESTISO_CELL_HPP

#include <irrlicht.h>

using namespace irr;
using namespace irr::core;
using namespace irr::scene;

class Cell {
private:
    IAnimatedMesh* cellMesh;
    IMeshSceneNode* cell_node;
    bool isSet;


public:
    Cell();

    void setupBetaPlace(s32 row, s32 column, ISceneManager *sceneManager);

    void setCell(IMeshSceneNode* node);
    void setup(ISceneManager *sceneManager,
               vector3di cursor,
               s16 type=0, vector3di rotation=vector3di(0, 0, 0));

    IMeshSceneNode* getCellNode();

    static const float size;
};


#endif //TESTISO_CELL_HPP

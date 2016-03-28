//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_CELL_HPP
#define TESTISO_CELL_HPP

#include <irrlicht.h>
#include "../Utils/Position.h"

using namespace irr;
using namespace irr::core;
using namespace irr::scene;

class Cell {
private:
    scene::IAnimatedMesh* cellMesh;
    scene::IMeshSceneNode* cell_node;

public:
    Cell();

    void setupQuadPlace(int row, int column, ISceneManager* sceneManager);
    //void drawCel(RenderWindow *windows);
};


#endif //TESTISO_CELL_HPP

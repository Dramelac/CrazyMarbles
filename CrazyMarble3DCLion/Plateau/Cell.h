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


public:
    Cell();

    void setupQuadPlace(int row, int column, ISceneManager* sceneManager);
    IMeshSceneNode* getCellNode();

    static const float size;
};


#endif //TESTISO_CELL_HPP

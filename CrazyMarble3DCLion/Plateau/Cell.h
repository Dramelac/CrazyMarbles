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

    void setupBetaPlace(int row, int column, ISceneManager *sceneManager);
    void setup(ISceneManager *sceneManager,
               int row, int column, int line,
               int type=0, vector3df rotation=vector3df(0.f,0.f,0.f));

    IMeshSceneNode* getCellNode();

    static const float size;
};


#endif //TESTISO_CELL_HPP

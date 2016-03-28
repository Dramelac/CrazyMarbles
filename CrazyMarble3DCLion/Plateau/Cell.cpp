//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Cell.h"
#include "../Utils/TextureLoader.h"

const float Cell::size = 150.0f;

Cell::Cell() {

    cellMesh = TextureLoader::cellMesh;

}


void Cell::setupQuadPlace(int row, int column, ISceneManager* sceneManager) {
    int line = 0;

    if (row >= 5 || column >= 5) line = 1;

    vector3df temp = vector3df(row*size,-500.0f-(line*size),column*size);
    cell_node = sceneManager->addMeshSceneNode(cellMesh);
    cell_node->setPosition(temp);
    //cell_node->setMaterialTexture(0, TextureLoader::tile);

}


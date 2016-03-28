//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Cell.h"
#include "../Utils/TextureLoader.h"

const float Cell::size = 150.0f;

Cell::Cell() {


}


void Cell::setupQuadPlace(int row, int column, ISceneManager* sceneManager) {
    int line = 0;

    // Uni test pente / gravity / TO REMOVE LATER
    if ((row == 5 && column < 5) || (column == 5 && row < 5)){
        cellMesh = TextureLoader::cell_pente_Mesh;
    }
    else if (row == 5 && column == 5 ){
        cellMesh = TextureLoader::cell_angle_Mesh;
    }
    else {
        cellMesh = TextureLoader::cellMesh;
    }
    if (row > 5 || column > 5) {
        line = 1;
    }


    vector3df temp = vector3df(row*size,-500.0f-(line*size),column*size);
    cell_node = sceneManager->addMeshSceneNode(cellMesh);
    cell_node->setPosition(temp);
    //cell_node->setMaterialTexture(0, TextureLoader::tile);

    // uni text for pente / gravity / TO REMOVE LATER
    if (column == 5 && row < 5) {
        cell_node->setRotation(vector3df(0.0f,-90.0f,0.0f));
        cell_node->setPosition(vector3df((row+1)*size,-500.0f-(line*size),column*size));
    }

}


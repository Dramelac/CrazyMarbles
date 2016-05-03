//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Cell.h"
#include "../Utils/TextureLoader.h"

const float Cell::size = 150.0f;

Cell::Cell() { }


void Cell::setupBetaPlace(int row, int column, ISceneManager *sceneManager) {
    int line = 0;

    // Uni test pente / gravity / TO REMOVE LATER
    if ((row == 5 && column < 5) || (column == 5 && row < 5)){  // Artificial pente
        cellMesh = TextureLoader::cell_pente_Mesh;
    }
    else if (row == 5 && column == 5 ){                         // Artificial angle
        cellMesh = TextureLoader::cell_angle_Mesh;
    }
    else {
        cellMesh = TextureLoader::cellMesh;                     // load Cell object
    }

    if (row > 5 || column > 5) {                                // line (temporaire)
        line = 1;
    }


    cell_node = sceneManager->addMeshSceneNode(cellMesh);               // create object on screen
    cell_node->setPosition(vector3df(row*size,-500.0f-(line*size),column*size));    // setup position
    //cell_node->setMaterialTexture(0, TextureLoader::tile);    // force texturing model (we used texture default)

    // uni text for pente / gravity / TO REMOVE LATER
    if (column == 5 && row < 5) {
        cell_node->setRotation(vector3df(0.0f,270.0f,0.0f));        // -90° rotation
        //cell_node->setPosition(vector3df((row+1)*size,-500.0f-(line*size),column*size)); // recenter after rotation
    }

}


void Cell::setup(ISceneManager *sceneManager,
                 int row, int column, int line,
                 int type, vector3df rotation) {
    switch (type){
        case 0:
            break;
        default:
            cellMesh = TextureLoader::cellMesh;                     // load Cell object
            break;
    }

    cell_node = sceneManager->addMeshSceneNode(cellMesh);               // create object on screen
    cell_node->setRotation(rotation);
    cell_node->setPosition(vector3df(row*size,-500.0f-(line*size),column*size));    // setup position
}


IMeshSceneNode *Cell::getCellNode() {
    return cell_node;
}

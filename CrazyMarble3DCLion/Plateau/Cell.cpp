//
// Created by mathieu on 23/02/16.
//

#include "Cell.h"
#include "../Utils/TextureLoader.h"

const float Cell::size = 150.0f;

Cell::Cell() {
    isSet = false;
    currentLevel = 0;
}


void Cell::setCell(IMeshSceneNode *node) {
    cell_node = node;
    isSet = true;
    currentLevel = s32((cell_node->getPosition().Y + 500) / -Cell::size);
}


void Cell::setupBetaPlace(s32 row, s32 column, ISceneManager *sceneManager) {
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


void Cell::setup(ISceneManager *sceneManager, vector3di cursor, s16 type, vector3di rotation) {

    switch (type){
        case 0:
            cellMesh = TextureLoader::cellMesh;                     // load Cell object
            break;
        case 1:
            cellMesh = TextureLoader::cell_pente_Mesh;              // load Cell object
            break;
        case 2:
            cellMesh = TextureLoader::cell_angle_Mesh;              // load Cell object
            break;
        case 3:
            cellMesh = TextureLoader::cell_angle_int_Mesh;          // load Cell object
            break;
        case 4:
            if(not isSet){
                return;
            }
        default:
            break;
    }

    if (not isSet){
        cell_node = sceneManager->addMeshSceneNode(cellMesh);               // create object on screen
        s32 id = 1000 + (cursor.X * 50) + cursor.Y;
        cell_node->setID(id);
        isSet = true;
    } else {
        if (type != 4){
            cell_node->setMesh(cellMesh);
        } else {
            cell_node->remove();
            isSet = false;
            return;
        }
    }

    cell_node->setRotation(vector3df(rotation.X, rotation.Y, rotation.Z));
    currentLevel = cursor.Z;
    cell_node->setPosition(vector3df(cursor.X*size,-500.0f-(cursor.Z*size),cursor.Y*size));    // setup position
}


IMeshSceneNode *Cell::getCellNode() {
    return cell_node;
}


s32 Cell::getCurrentLevel(s32 cursorZ) {
    if (not isSet){
        return cursorZ;
    } else {
        return currentLevel;
    }
}


Cell::~Cell() {
    if (isSet){
        cell_node->remove();
    }
}

ITriangleSelector* Cell::getSelector(ISceneManager *sceneManager) {
    if (not isSet){
        return nullptr;
    } else {
        // create Selector
        ITriangleSelector* selector = sceneManager->createTriangleSelector(cell_node->getMesh(), cell_node);
        cell_node->setTriangleSelector(selector);                    // set to the node the new selector
        return selector;
    }
}


//
// Created by mathieu on 23/02/16.
//

#include "Cell.h"
#include "../Utils/TextureLoader.h"

const float Cell::size = 150.0f;

Cell::Cell() {
    isSet = false;
    isFinisCell = false;
    isEntitySet = false;
    currentLevel = 0;
}

// build cell from node
void Cell::setCell(IMeshSceneNode *node) {
    cell_node = node;
    if (not strcmp(cell_node->getName(), "finish")) {
        isFinisCell = true;
    }
    isSet = true;

    currentLevel = s32((cell_node->getPosition().Y + 500) / -Cell::size);
}

// setup cell settings from level editor
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
        cell_node->setName("Cell");
        isSet = true;
    } else {
        if (type != 4){
            cell_node->setMesh(cellMesh);
            if (isFinisCell) {
                cell_node->setMaterialTexture(0,TextureLoader::finish_line);
            }
        } else {
            cell_node->remove();
            isSet = false;
            isFinisCell = false;
            return;
        }
    }

    cell_node->setRotation(vector3df(rotation.X, rotation.Y, rotation.Z));
    currentLevel = cursor.Z;
    cell_node->setPosition(vector3df(cursor.X*size,-500.0f-(cursor.Z*size),cursor.Y*size));    // setup position

    if (isEntitySet){
        entity->setPosition(vector3df(cursor.X*size,-200-(cursor.Z*size),cursor.Y*size));
    }
}

// get Cell level
s32 Cell::getCurrentLevel(s32 cursorZ) {
    if (not isSet){
        return cursorZ;
    } else {
        return currentLevel;
    }
}

// destructor
Cell::~Cell() {
    if (isSet){
        cell_node->remove();
    }
    if (isEntitySet){
        delete entity;
    }
}

// get map cell selector
ITriangleSelector* Cell::getSelector(ISceneManager *sceneManager, bool filterFinish) {
    if (not isSet){
        return nullptr;
    } else if (not filterFinish || isFinisCell){
        // create Selector
        ITriangleSelector* selector = sceneManager->createTriangleSelector(cell_node->getMesh(), cell_node);
        cell_node->setTriangleSelector(selector);                    // set to the node the new selector
        return selector;
    } else {
        return nullptr;
    }
}

// mark cell as finish line or not (level editor feature)
void Cell::switchFinishType() {
    if (isSet){
        if (isFinisCell){
            cell_node->setName("Cell");
            cell_node->setMaterialTexture(0,TextureLoader::tile);
            isFinisCell = false;
        } else {
            cell_node->setName("finish");
            cell_node->setMaterialTexture(0,TextureLoader::finish_line);
            isFinisCell = true;
        }
    }

}

// setup entity on cell
void Cell::setEntity(BlackMarbles *enemie) {
    if (isEntitySet){
        delete entity;
    }
    entity = enemie;
    isEntitySet = true;
}

void Cell::setEntity(IMeshSceneNode *node) {
    setEntity(new BlackMarbles(node));
}

// add / remove entity
void Cell::switchEntity(BlackMarbles *enemie) {
    if (isEntitySet){
        delete entity;
        delete enemie;
        isEntitySet = false;
    } else {
        entity = enemie;
        isEntitySet = true;
    }
}

// map collision to entity
void Cell::enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {
    if (isEntitySet){
        entity->enableCollision(metaSelector, sceneManager);
    }
}

// collision player / entity to entity
void Cell::setupPlayerToEntity(ISceneManager *sceneManager, Player* player, bool activePlayer) {
    if (isEntitySet){
        entity->setPlayer(sceneManager, player, activePlayer);
    }
}

// update entity position (moving / innertie / collision)
void Cell::updateEntityMoving(f32 deltaTime, IRandomizer *rand) {
    if (isEntitySet){
        if (entity->isAlive()) {

            entity->moveBLackMarbles(rand);
            entity->applyMove(deltaTime);
        } else {
            delete entity;
            isEntitySet = false;
        }
    }
}


BlackMarbles *Cell::getEntity() const {
    if (isEntitySet) {
        return entity;
    } else {
        return nullptr;
    }
}
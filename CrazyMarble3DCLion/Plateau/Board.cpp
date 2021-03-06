//
// Created by mathieu on 23/02/16.
//

#include "Board.h"
#include "../General/LevelEditor.h"

// Level Editor construct
Board::Board(ISceneManager* sceneManager, u16 size) {
    heightNumber = size;
    widthNumber = size;
    // init all Cell by default (to change with board loading)
    board = new Cell*[heightNumber];
    for (int i = 0; i<heightNumber; i++){
        board[i] = new Cell[widthNumber];
    }
    startPoint = sceneManager->addEmptySceneNode();               // create object on screen
    startPoint->setName("start");
    startPoint->setPosition(vector3df(25.0f,0.0f,25.0f));
}

// load scene construct / start game
Board::Board(ISceneManager* sceneManager): heightNumber(LevelEditor::size), widthNumber(LevelEditor::size) {
    array<ISceneNode *> nodes;
    sceneManager->getSceneNodesFromType(scene::ESNT_ANY, nodes); // Find all nodes
    startPoint = sceneManager->getSceneNodeFromName("start");

    board = new Cell*[heightNumber];
    for (int i = 0; i<heightNumber; i++){
        board[i] = new Cell[widthNumber];
    }

    for (u32 i=0; i < nodes.size(); ++i)
    {
        ISceneNode * node = nodes[i];
        s32 id = node->getID();
        if (id >= 3500) {
            id -= 3500;
            s32 X = id / 50;
            s32 Y = id % 50;
            board[X][Y].setEntity((IMeshSceneNode*) node);
        }
        else if (id >= 1000){
            id -= 1000;
            s32 X = id / 50;
            s32 Y = id % 50;
            board[X][Y].setCell((IMeshSceneNode*) node);
        }
    }
}

// Destructor
Board::~Board() {
    for (int i = 0; i < heightNumber; i++){
        delete[] board[i];
    }
    delete[] board;
}

// create map metaSelector (map collision)
IMetaTriangleSelector *Board::getMapMetaSelector(ISceneManager *sceneManager, bool filterFinish) {

	// plateau de selector collision
	scene::IMetaTriangleSelector* metaSelector = sceneManager->createMetaTriangleSelector();

	for (int row = 0; row < widthNumber; row++)
	{
		for (int column = 0; column < heightNumber; column++)
		{
            // selector mesh collision temp
            ITriangleSelector *selector = board[row][column].getSelector(sceneManager, filterFinish); // getSelector
            if (selector == nullptr) continue;

			metaSelector->addTriangleSelector(selector);                                    // update metaSelectors
            selector->drop();
        }
	}
                                                                       // drop temp selector
	return metaSelector;
}

// get start point position
vector3df Board::getStartPoint() {
    if (startPoint != nullptr){
        return startPoint->getPosition();
    } else {
        return vector3df(25.0f,0.0f,25.0f);
    }
}

// setup start point (Level Editor)
void Board::setupStartPoint(vector3di cursor) {
    vector3df point(cursor.X*Cell::size,-cursor.Z*Cell::size,cursor.Y*Cell::size);
    startPoint->setPosition(point);
}

// apply collision / gravity to all Entities
void Board::setupCollisionEntity(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager) {
    for (int row = 0; row < widthNumber; row++)
    {
        for (int column = 0; column < heightNumber; column++)
        {
            board[row][column].enableCollision(metaSelector, sceneManager);
        }
    }
}

// setup player / collision with entities
void Board::setPlayerToEntities(ISceneManager *sceneManager, Player *player, bool activePlayer) {
    for (int row = 0; row < widthNumber; row++)
    {
        for (int column = 0; column < heightNumber; column++)
        {
            board[row][column].setupPlayerToEntity(sceneManager, player, activePlayer);
        }
    }
}

// apply moving on all entities
void Board::applyMovingOnEntities(f32 deltaTime, IRandomizer *rand) {
    for (int row = 0; row < widthNumber; row++)
    {
        for (int column = 0; column < heightNumber; column++)
        {
            board[row][column].updateEntityMoving(deltaTime,rand);
        }
    }
}

// get cell object
Cell* Board::getCell(vector3di cursor) {
    return &board[cursor.X][cursor.Y];
}




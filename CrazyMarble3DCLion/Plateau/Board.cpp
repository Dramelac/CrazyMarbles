//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Board.h"
#include "../General/LevelEditor.h"

// debug construct
Board::Board(unsigned int hauteur, unsigned int largeur, ISceneManager* sceneManager) : heightNumber(hauteur),
																						widthNumber(largeur){
	// init all Cell by default (to change with board loading)
	board = new Cell*[heightNumber];
	for (int i = 0; i<heightNumber; i++){
		board[i] = new Cell[widthNumber];
	}
    initAllCellPlace(sceneManager);
}

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
        if (id >= 1000){
            id -= 1000;
            s32 X = id / 50;
            s32 Y = id % 50;
            board[X][Y].setCell((scene::IMeshSceneNode*) node);
        }
    }
}


Board::~Board() {
    for (int i = 0; i < heightNumber; i++){
        delete[] board[i];
    }
    delete[] board;
}

void Board::initAllCellPlace(scene::ISceneManager *sceneManager) {
	// setup all cell with model pos etc
	for (int row = 0; row < widthNumber; row++)
	{
		for (int column = 0; column < heightNumber; column++)
		{
            board[row][column].setupBetaPlace(row, column, sceneManager);
		}
	}
}


void Board::setupCell(ISceneManager *sceneManager, vector3di cursor, s16 type, vector3di rotation) {
    board[cursor.X][cursor.Y].setup(sceneManager, cursor, type, rotation);
}


IMetaTriangleSelector *Board::getMapMetaSelector(ISceneManager *sceneManager) {

	// plateau de selector collision
	scene::IMetaTriangleSelector* metaSelector = sceneManager->createMetaTriangleSelector();

	// selector mesh collision temp
	scene::ITriangleSelector *selector;


	for (int row = 0; row < widthNumber; row++)
	{
		for (int column = 0; column < heightNumber; column++)
		{
			IMeshSceneNode* temp_node = this->board[row][column].getCellNode();             // load 1 node element
			selector = sceneManager->createTriangleSelector(temp_node->getMesh(), temp_node);      // getSelector
			//selector = sceneManager->createOctreeTriangleSelector(temp_node->getMesh(), temp_node, 128);

			temp_node->setTriangleSelector(selector);                                       // set to the node the new selector
			metaSelector->addTriangleSelector(selector);                                    // update metaSelectors
		}
	}

	selector->drop();                                                                        // drop temp selector

	return metaSelector;
}


IMetaTriangleSelector *Board::getMapMetaSelectorFromNodes(ISceneManager *sceneManager) {

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = sceneManager->createMetaTriangleSelector();


    for (u32 i=0; i < nodes.size(); ++i)
    {
        ISceneNode * node = nodes[i];

        // selector mesh collision temp
        ITriangleSelector *selector=0;

        switch(node->getType())
        {
            case scene::ESNT_CUBE:
            case scene::ESNT_ANIMATED_MESH:
                // We use hitbox
                selector = sceneManager->createTriangleSelectorFromBoundingBox(node);
                break;

            case scene::ESNT_MESH:
            case scene::ESNT_SPHERE: // Derived from IMeshSceneNode
                // Cast Node to MeshNode + getMesh / Node
                selector = sceneManager->createTriangleSelector(((scene::IMeshSceneNode*)node)->getMesh(), node);
                break;

            case scene::ESNT_TERRAIN:
                // Cast Node to TerrainNode
                selector = sceneManager->createTerrainTriangleSelector((scene::ITerrainSceneNode*)node);
                break;

            case scene::ESNT_OCTREE:
                // Cast Node to MeshNode + octree analysis
                selector = sceneManager->createOctreeTriangleSelector(((scene::IMeshSceneNode*)node)->getMesh(), node);
                break;

            default:
                // Don't create a selector for this node type
                break;
        }

        if(selector)
        {
            // Add it to the meta selector, which will take a reference to it
            node->setTriangleSelector(selector);
            metaSelector->addTriangleSelector(selector);
            // And drop my reference to it, so that the meta selector owns it.
            selector->drop();
        }
    }

    return metaSelector;
}


vector3df Board::getStartPoint() {
    if (startPoint != nullptr){
        return startPoint->getPosition();
    } else {
        return vector3df(25.0f,0.0f,25.0f);
    }
}

void Board::setupStartPoint(vector3di cursor) {
    vector3df point(cursor.X*Cell::size,-cursor.Z*Cell::size,cursor.Y*Cell::size);
    startPoint->setPosition(point);
}


s32 Board::getCurrentLevel(vector3di cursor) {
    return board[cursor.X][cursor.Y].getCurrentLevel(cursor.Z);
}






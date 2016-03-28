//
// Created by mathieu on 23/02/16.
//

#include "Board.h"

Board::Board(unsigned int hauteur, unsigned int largeur, ISceneManager* sceneManager) : heightNumber(hauteur),
																						widthNumber(largeur){
	// init all Cell by default (to change with board loading)
	board = new Cell*[hauteur];
	for (int i = 0; i<hauteur; i++){
		board[i] = new Cell[largeur];
	}
	initCellPlace(sceneManager);
}


void Board::initCellPlace(scene::ISceneManager* sceneManager) {
	// setup all cell with model pos etc
	for (int row = 0; row < widthNumber; row++)
	{
		for (int column = 0; column < heightNumber; column++)
		{
			board[row][column].setupQuadPlace(row, column, sceneManager);
		}
	}
}

int Board::getLargeur() const {
	return widthNumber;
}

int Board::getHauteur() const {
	return heightNumber;
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
			//selector = sceneManager->createTriangleSelectorFromBoundingBox(temp_node);      // getSelector
			selector = sceneManager->createOctreeTriangleSelector(temp_node->getMesh(), temp_node, 128);

			temp_node->setTriangleSelector(selector);                                       // set to the node the new selector
			metaSelector->addTriangleSelector(selector);                                    // update metaSelectors
		}
	}

	selector->drop();                                                                        // drop temp selector

	return metaSelector;
}

Board::~Board() {
	for (int i = 0; i < heightNumber; i++){
		delete[] board[i];
	}
	delete[] board;
}


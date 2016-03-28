//
// Created by mathieu on 23/02/16.
//

#include "Board.h"

Board::Board(unsigned int hauteur, unsigned int largeur, ISceneManager* sceneManager) : heightNumber(hauteur),
																						widthNumber(largeur){
	board = new Cell*[hauteur];
	for (int i = 0; i<hauteur; i++){
		board[i] = new Cell[largeur];
	}
	initCellPlace(sceneManager);
}


void Board::initCellPlace(scene::ISceneManager* sceneManager) {
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

Board::~Board() {
	for (int i = 0; i < heightNumber; i++){
		delete[] board[i];
	}
	delete[] board;
}

/*
void Board::drawBoard(RenderWindow *windows) {

	for (int row = 0; row < widthNumber; row++)
	{
		for (int column = 0; column < heightNumber; column++)
		{
			board[row][column].drawCel(windows);
		}
	}
}
*/


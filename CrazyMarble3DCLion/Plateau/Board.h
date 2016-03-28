//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_BOARD_HPP
#define TESTISO_BOARD_HPP


#include "Cell.h"

class Board {
private:
	Cell** board;
	int widthNumber;
	int heightNumber;

	void initCellPlace(ISceneManager* sceneManager);
public:
	Board(const unsigned int hauteur, const unsigned int largeur, ISceneManager* sceneManager);
	~Board();

	int getLargeur() const;
	int getHauteur() const;

	IMetaTriangleSelector* getMapMetaSelector(ISceneManager* sceneManager);
};


#endif //TESTISO_BOARD_HPP

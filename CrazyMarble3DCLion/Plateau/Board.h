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

	void initAllCellPlace(ISceneManager *sceneManager);
public:
	Board(const unsigned int hauteur, const unsigned int largeur, ISceneManager* sceneManager);
    Board(u16 size);

    ~Board();

	int getLargeur() const;
	int getHauteur() const;

    void setupCell(ISceneManager *sceneManager,
                   vector3di cursor,
                   s16 type=0, vector3df rotation=vector3df(0.f,0.f,0.f));

	IMetaTriangleSelector* getMapMetaSelector(ISceneManager* sceneManager);
};


#endif //TESTISO_BOARD_HPP

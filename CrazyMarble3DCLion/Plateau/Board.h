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

    core::array<scene::ISceneNode *> nodes;
	ISceneNode* startPoint;

	void initAllCellPlace(ISceneManager *sceneManager);
public:
	Board(const unsigned int hauteur, const unsigned int largeur, ISceneManager* sceneManager);
    Board(ISceneManager* sceneManager, u16 size);

    Board(ISceneManager* sceneManager);

    ~Board();


    void setupCell(ISceneManager *sceneManager,
                   vector3di cursor,
                   s16 type=0, vector3di rotation=vector3di(0, 0, 0));

    void setupStartPoint(vector3di cursor);

	IMetaTriangleSelector* getMapMetaSelector(ISceneManager* sceneManager);
	IMetaTriangleSelector* getMapMetaSelectorFromNodes(ISceneManager* sceneManager);

    vector3df getStartPoint();
    s32 getCurrentLevel(vector3di cursor);
};


#endif //TESTISO_BOARD_HPP

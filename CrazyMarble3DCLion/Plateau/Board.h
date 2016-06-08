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

	ISceneNode* startPoint;

public:
	Board(ISceneManager* sceneManager, u16 size);
    Board(ISceneManager* sceneManager);
    ~Board();

	Cell* getCell(vector3di cursor);

    void setupStartPoint(vector3di cursor);
    vector3df getStartPoint();

    // Map meta selector / finish line collision
	IMetaTriangleSelector* getMapMetaSelector(ISceneManager* sceneManager, bool filterFinish = false);
    // entity map collision
    void setupCollisionEntity(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager);
    void setPlayerToEntities(ISceneManager *sceneManager, Player* player, bool activePlayer=true);

    void applyMovingOnEntities(f32 deltaTime,IRandomizer *rand);
};


#endif //TESTISO_BOARD_HPP

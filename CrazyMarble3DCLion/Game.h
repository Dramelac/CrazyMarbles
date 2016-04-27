//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include <iostream>

#include "Plateau/Board.h"
#include "Play/Player.h"
#include "Utils/TextureLoader.h"
#include "Utils/KeyboardEvent.h"

#include <irrlicht.h>

using namespace irr;
using namespace irr::scene;
using namespace irr::core;
using namespace irr::video;

class Game {
private:
	Board* board;
	IrrlichtDevice* device;
	IVideoDriver* driver;
	ISceneManager *sceneManager;

	const unsigned int width;
	const unsigned int height;


	KeyboardEvent keyevent;
    int speed;

    Player *player;
	float zoom;

	void updateGameBoard();
	void keyboardChecker(f32 deltaTime);
public:
	Game(const unsigned int x, const unsigned int y, bool day = true);
	~Game();

	void gameLoop();
};


#endif //TESTISO_GAME_HPP

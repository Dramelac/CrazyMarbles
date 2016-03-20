//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include "Board.h"
#include "Player.h"
//#include "Utils/SoundUtils.hpp"
#include <irrlicht.h>

using namespace irr;

class Game {
private:
	Board board;
	IrrlichtDevice* device;
	video::IVideoDriver* driver;
	scene::ISceneManager *sceneManager;

	const unsigned int width;
	const unsigned int height;

	Player player;
	int speed;
	float zoom;

	void updateGameBoard();
	void eventChecker();
	void keyboardChecker();
	void updateView();
public:
	Game(const unsigned int x, const unsigned int y);
	void gameLoop();
};


#endif //TESTISO_GAME_HPP

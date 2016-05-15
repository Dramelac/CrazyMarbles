//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include <iostream>

#include "../Plateau/Board.h"
#include "../Play/Player.h"
#include "../Utils/KeyboardEvent.h"

#include <irrlicht.h>

using namespace irr;
using namespace scene;
using namespace core;
using namespace video;
using namespace io;

class Game {
private:
	Board* board;
	IrrlichtDevice* device;
	IVideoDriver* driver;
	ISceneManager *sceneManager;

	KeyboardEvent *keyevent;
    bool play;

    Player *player;

    void setupSkyBox(bool day);
	void keyboardChecker(f32 deltaTime);
public:
	Game(IrrlichtDevice* inDevice, KeyboardEvent* keyevent,
		 const unsigned int x, const unsigned int y, bool day = true);
    Game(IrrlichtDevice *inDevice, KeyboardEvent *keyevent, path pathMap);
    ~Game();

	s16 gameLoop();
};


#endif //TESTISO_GAME_HPP

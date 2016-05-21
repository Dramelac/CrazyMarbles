
#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include <iostream>

#include <irrlicht.h>

#include "../Utils/Chrono.h"

#include "../Plateau/Board.h"
#include "../Play/Player.h"
#include "../Utils/KeyboardEvent.h"

using namespace irr;
using namespace scene;
using namespace core;
using namespace video;
using namespace io;

class Game {
private:
	IrrlichtDevice* device;
	IGUIEnvironment* gui;
	IVideoDriver* driver;
	ISceneManager *sceneManager;

	KeyboardEvent *keyevent;
    bool play;

    Player *player;
	Player *player2;
	bool isNetwork;

	Board* board;
	Chrono *chrono;

    void setupSkyBox(bool day);
	void keyboardChecker(f32 deltaTime);

	s16 pause();
public:
	Game(IrrlichtDevice* inDevice, KeyboardEvent* keyevent,
		 const unsigned int x, const unsigned int y, bool day = true);
    Game(IrrlichtDevice *inDevice, KeyboardEvent *keyevent, path pathMap, stringc pseudo, s32 score=0);
    ~Game();
	void setup2P();

    void networkGameLoop();
	Board * getBoard() const;

	s16 gameLoop();
	s32 getScore();
};


#endif //TESTISO_GAME_HPP

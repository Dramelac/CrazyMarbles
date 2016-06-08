
#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include <iostream>

#include <irrlicht.h>

#include "../Utils/Chrono.h"

#include "../Plateau/Board.h"
#include "../Play/Player.h"
#include "../Utils/KeyboardEvent.h"
#include "../GUI/GUIMessage/WinLooseChoose.h"

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

    int lastFPS;
    u32 then;

	void keyboardChecker(f32 deltaTime);

	s16 pause();
public:
    Game(IrrlichtDevice *inDevice, KeyboardEvent *keyevent, path pathMap, stringc pseudo, s32 score=0);
    ~Game();
	void setup2P(stringc pseudo="NetworkPlayer");

    u16 networkGameLoop();


	Board * getBoard() const;
	Player * getPlayer() const;
    Player * getPlayer2() const;

    s16 gameLoop();
	s32 getScore();
};


#endif //TESTISO_GAME_HPP

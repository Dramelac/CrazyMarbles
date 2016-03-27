//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include <iostream>

#include "Plateau/Board.h"
#include "Play/Player.h"
#include "Utils/TextureLoader.h"

#include <irrlicht.h>

using namespace irr;

class Game {
private:
	Board board;
	IrrlichtDevice* device;
	video::IVideoDriver* driver;
	scene::ISceneManager *sceneManager;

	scene::IMeshSceneNode* cube;
	scene::ISceneNode* test;

    scene::IAnimatedMesh* cubeMesh;
    scene::IMeshSceneNode* cube_node;

	scene::ICameraSceneNode* fpsCamera;

	const unsigned int width;
	const unsigned int height;

	Player *player;
	int speed;
	float zoom;

	void updateGameBoard();
	void eventChecker();
	void keyboardChecker();
	void updateView();
public:
	Game(const unsigned int x, const unsigned int y);
	~Game();

	void gameLoop();
};


#endif //TESTISO_GAME_HPP

//
// Created by mathieu on 23/02/16.
//

#include "Game.h"

// Debug construct (DEPRECATED)
Game::Game(IrrlichtDevice* inDevice, KeyboardEvent* keyevent,
           unsigned int x, unsigned int y, bool day) :
        play(true){

	
	this->device = inDevice;
    this->keyevent = keyevent;

    this->device->setWindowCaption(L"Crazy Marble");                    // first windows name
    device->getCursorControl()->setVisible(false);                      // curseur invisible

	this->driver = this->device->getVideoDriver();                      // creation driver
	this->sceneManager = this->device->getSceneManager();               // creation scene manager


    setupSkyBox(day);

    this->player = new Player(sceneManager, "Test", 100);

    this->board = new Board(x, y, sceneManager);

    // LIGHT        ambient light for texture (to change for shadow on cell)

    /*              light point for use later
    sceneManager->addLightSceneNode(0, core::vector3df(0, 500, 20),
                            video::SColorf(1.0f, 1.0f, 1.0f), 1000.0f, -1);
    */

    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));       // light everywhere


    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaMapSelector = board->getMapMetaSelector(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaMapSelector, sceneManager);                    // apply collision map to player

    metaMapSelector->drop();
}

// Play select Map
Game::Game(IrrlichtDevice *inDevice, KeyboardEvent *keyevent, path pathMap) :
        device(inDevice), keyevent(keyevent), play(true) {

    this->device->setWindowCaption(L"Crazy Marble");                    // first windows name
    device->getCursorControl()->setVisible(false);                      // curseur invisible

    this->driver = this->device->getVideoDriver();                      // creation driver
    this->sceneManager = this->device->getSceneManager();               // creation scene manager

    IReadFile* map = createReadFile(pathMap);
    sceneManager->loadScene(map);

    this->board  = new Board(sceneManager);

    this->player = new Player(sceneManager, "Test", 100, board->getStartPoint());

    //sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));       // light everywhere


    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = board->getMapMetaSelector(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaSelector, sceneManager);                    // apply collision map to player
    board->setupCollisionEntity(metaSelector, sceneManager);
    metaSelector->drop();

    // collision finish line
    IMetaTriangleSelector* metaFinishSelector = board->getMapMetaSelector(sceneManager, true);
    player->addFinishLineCollision(metaFinishSelector, sceneManager);
    metaFinishSelector->drop();

    // collision player/entities
    board->setPlayerToEntities(sceneManager, player);


    //sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);

}

// Game loop
s16 Game::gameLoop() {

    int lastFPS = -1;
    u32 then = device->getTimer()->getTime();
	while (device->run()){

        if (device->isWindowActive()){                                      // check if windows is active

            driver->beginScene(true,true, video::SColor(255,0,0,0));        // font default color

            player->updateCamera();

            sceneManager->drawAll();                                        // update display
            driver->endScene();


            // display frames per second in window title
            int fps = driver->getFPS();
            if (lastFPS != fps)
            {
                core::stringw title = L"Crazy Marble - 2DEV  [FPS:";
                title += fps;
                title += "]";

                device->setWindowCaption(title.c_str());
                lastFPS = fps;
            }

            //updateGameBoard();                    //to implement later
            // Move time
            u32 now = device->getTimer()->getTime();
            f32 deltaTime = (f32)(now-then) / 1000.f;
            then = now;
            keyboardChecker(deltaTime);
            IRandomizer *rand = device->getRandomizer();
            board->applyMovingOnEntities(deltaTime,rand);

            if (not player->isAlive()){
                // player is dead
                player->respawn();
            }

            if (!play || player->checkFinish()){
                break;
            }

        }
	}

    return 0;

}

// keyboard event
void Game::keyboardChecker(f32 deltaTime) {

    // apply moving to player
    player->processMoving(keyevent, deltaTime);


    if(keyevent->IsKeyDown(KEY_KEY_P)){
        player->updateFOV(0.005);
    } else if(keyevent->IsKeyDown(KEY_KEY_O)){
        player->updateFOV(f32(-0.005));
    }

    // quit event

    if (keyevent->IsKeyDown(KEY_ESCAPE, true)){
        play = false;
    }

}

// destructor
Game::~Game() {

    delete board;
    delete player;

    sceneManager->clear();

}

// debug skybox (DEPRECATED)
void Game::setupSkyBox(bool day) {
    if (day){
        sceneManager->addSkyBoxSceneNode(
                driver->getTexture("data/skybox/day/top.png"),
                driver->getTexture("data/skybox/day/bottom.png"),
                driver->getTexture("data/skybox/day/front.png"),
                driver->getTexture("data/skybox/day/back.png"),
                driver->getTexture("data/skybox/day/left.png"),
                driver->getTexture("data/skybox/day/right.png"));
    } else {
        sceneManager->addSkyBoxSceneNode(
                driver->getTexture("data/skybox/night/top.png"),
                driver->getTexture("data/skybox/night/bottom.png"),
                driver->getTexture("data/skybox/night/front.png"),
                driver->getTexture("data/skybox/night/back.png"),
                driver->getTexture("data/skybox/night/left.png"),
                driver->getTexture("data/skybox/night/right.png"));
    }
}




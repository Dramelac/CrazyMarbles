//
// Created by mathieu on 23/02/16.
//

#include "Game.h"
#include "../GUI/PlayMessage/WinLooseChoose.h"

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
Game::Game(IrrlichtDevice *inDevice, KeyboardEvent *keyevent, path pathMap, stringc pseudo, s32 score) :
        device(inDevice), keyevent(keyevent), play(true) {

    this->device->setWindowCaption(L"Crazy Marble");                    // first windows name
    device->getCursorControl()->setVisible(false);                      // curseur invisible

    this->driver = this->device->getVideoDriver();                      // creation driver
    this->sceneManager = this->device->getSceneManager();               // creation scene manager

    gui = device->getGUIEnvironment();
    IReadFile* map = createReadFile(pathMap);
    sceneManager->loadScene(map);

    this->board  = new Board(sceneManager);

    this->player = new Player(sceneManager, driver, device->getGUIEnvironment(), pseudo, 100, board->getStartPoint(), score);

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
    isNetwork =false;
    chrono = new Chrono(device, 60);
    player->updateScore();


}

// Game loop
s16 Game::gameLoop() {

    int lastFPS = -1;

    u32 then = device->getTimer()->getTime();

	while (device->run()){

        if (device->isWindowActive()){                                      // check if windows is active

            driver->beginScene(true,true, video::SColor(255,0,0,0));        // font default color
            player->updateCamera();

            sceneManager->drawAll();
            // update display
            gui->drawAll();
            driver->endScene();

            chrono->start();

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
                chrono->stop();
                player->setGravity();
                WinLooseChoose popup(device, keyevent, "\t\t\t\t\t\t\t\t\t\t\t\t\t YOU DIED !");
                return popup.loop();
            }

            if (chrono->getTime() == 0){
                chrono->stop();
                player->setGravity();
                WinLooseChoose popup(device, keyevent, "\t\t\t\t\t\t\t\t\t\t\t\t\t TIMES UP !");
                return popup.loop();
            }

            if (player->checkFinish()){
                // player win
                WinLooseChoose popup(device, keyevent, player->calculFinal(chrono->getTime()), true);
                chrono->stop();
                return popup.loop();
            }

            if (!play){
                s16 temp = pause();
                if (temp == 0) {
                    chrono->start();
                    play = true;
                } else {
                    return temp;
                }
            }

        }
        else{
            s16 temp = pause();
            if (temp == 0) {
                chrono->start();
            } else {
                return temp;
            }
        }
	}

    return -1;

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
    delete chrono;

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

s32 Game::getScore() {
    return player->getScore();
}

s16 Game::pause() {
    chrono->stop();
    player->setGravity(0);
    WinLooseChoose popup(device, keyevent, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t PAUSE ", false, true);
    s16 tempReturn = popup.loop();
    player->setGravity();
    return tempReturn;
}


Board *Game::getBoard() const {
    return board;
}

void Game::setup2P() {

    isNetwork=true;
    player2 = new Player(sceneManager,driver,"NetworkPlayer",100,board->getStartPoint(),0);

    IMetaTriangleSelector* metaSelector = board->getMapMetaSelector(sceneManager);
    player2->enableCollision(metaSelector, sceneManager);
    metaSelector->drop();

    IMetaTriangleSelector* metaFinishSelector = board->getMapMetaSelector(sceneManager, true);
    player2->addFinishLineCollision(metaFinishSelector, sceneManager);
    metaFinishSelector->drop();

    board->setPlayerToEntities(sceneManager, player2);
    ITriangleSelector* player1Selector = player->getSelector(sceneManager);
    player2->enableCustomCollision(player1Selector,sceneManager);
    player1Selector->drop();

    ITriangleSelector* player2Selector = player2->getSelector(sceneManager);
    player->enableCustomCollision(player2Selector,sceneManager);
    player2Selector->drop();



}

void Game::networkGameLoop() {

}


Player *Game::getPlayer() const {
    return player;
}

Player *Game::getPlayer2() const {
    if (isNetwork) {
        return player2;
    } else {
        return player;
    }
}
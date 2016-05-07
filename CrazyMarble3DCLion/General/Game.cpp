//
// Created by mathieu on 23/02/16.
//

#include "Game.h"

// Debug construct
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

    this->player = new Player(sceneManager, "Test", 20);

    this->board = new Board(x, y, sceneManager);

    // LIGHT        ambient light for texture (to change for shadow on cell)

    /*              light point for use later
    sceneManager->addLightSceneNode(0, core::vector3df(0, 500, 20),
                            video::SColorf(1.0f, 1.0f, 1.0f), 1000.0f, -1);
    */

    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));       // light everywhere


    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = board->getMapMetaSelector(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaSelector, sceneManager);                    // apply collision map to player
    speed = 250;
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

    this->player = new Player(sceneManager, "Test", 20, board);

    //sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));       // light everywhere

    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = board->getMapMetaSelector(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaSelector, sceneManager);                    // apply collision map to player
    metaSelector->drop();

    IMetaTriangleSelector* metaFinishSelector = board->getMapMetaSelector(sceneManager, true);
    player->addFinishLineCollision(metaFinishSelector, sceneManager);
    metaFinishSelector->drop();

    //sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);

    speed = 500;

}


void Game::gameLoop() {

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

            if (player->isFall()){
                // player is fall
            }

            if (!play || player->checkFinish()){
                break;
            }

        }
	}

}

void Game::keyboardChecker(f32 deltaTime) {
    // Init moving vector
    core::vector3df vector(0.0f,0.0f,0.0f);
    u16 count=0;

    // Check all key
    if(keyevent->IsKeyDown(KEY_KEY_Z)){
        vector.X += -speed * deltaTime;
        vector.Z += -speed * deltaTime;
        count++;
    }
    else if(keyevent->IsKeyDown(KEY_KEY_S)){
        vector.X += speed * deltaTime;
        vector.Z += speed * deltaTime;
        count++;
    }
    if(keyevent->IsKeyDown(KEY_KEY_Q)){
        vector.X += speed * deltaTime;
        vector.Z += -speed * deltaTime;
        count++;
    }
    else if(keyevent->IsKeyDown(KEY_KEY_D)){
        vector.X += -speed * deltaTime;
        vector.Z += speed * deltaTime;
        count++;
    }

    if (count == 2){
        vector.X /= 2;
        vector.Z /= 2;
    }
    vector.Y += -7;
    //cout << vector.X << "/" << vector.Y << "/" << vector.Z << endl;

    // apply moving to player
    player->updatePosition(vector);


    if(keyevent->IsKeyDown(KEY_KEY_P)){
        player->updateFOV(0.005);
    } else if(keyevent->IsKeyDown(KEY_KEY_O)){
        player->updateFOV(-0.005);
    }

    // quit event

    if (keyevent->IsKeyDown(KEY_ESCAPE, true)){
        play = false;
    }

}

Game::~Game() {

    delete player;
    delete board;

    sceneManager->clear();

}

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




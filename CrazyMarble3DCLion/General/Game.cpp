//
// Created by mathieu on 23/02/16.
//

#include "Game.h"

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

    // SkyDome
    //sceneManager->addSkyDomeSceneNode(driver->getTexture("data/../../irrlicht-1.8.3/media/skydome.jpg"),16,8,0.95f,2.0f);


    this->player = new Player("Test", 20, sceneManager);

    this->board = new Board(x, y, sceneManager);

    // LIGHT        ambient light for texture (to change for shadow on cell)

    /*              light point for use later
    sceneManager->addLightSceneNode(0, core::vector3df(0, 500, 20),
                            video::SColorf(1.0f, 1.0f, 1.0f), 1000.0f, -1);
    */

    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));       // light everywhere



	// CAMERA
    /*
	SKeyMap keyMap[4];
	keyMap[0].Action = EKA_MOVE_FORWARD;   // avancer
	keyMap[0].KeyCode = KEY_KEY_Z;
	keyMap[1].Action = EKA_MOVE_BACKWARD;  // reculer
	keyMap[1].KeyCode = KEY_KEY_S;
	keyMap[2].Action = EKA_STRAFE_LEFT;    // a gauche
	keyMap[2].KeyCode = KEY_KEY_Q;
	keyMap[3].Action = EKA_STRAFE_RIGHT;   // a droite
	keyMap[3].KeyCode = KEY_KEY_D;
    */
    // To change

    //sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);    // create camera (to change /
                                                                                        // fix to player)
    //fpsCamera->setPosition(vector3df(x*Cell::size,600.0f,y*Cell::size));                // init camera pos
    //fpsCamera->setPosition(vector3df(850,300,850));


    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = board->getMapMetaSelector(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaSelector, sceneManager);                    // apply collision map to player
    speed = 250;
}


Game::Game(IrrlichtDevice *inDevice, KeyboardEvent *keyevent, path pathMap) :
        device(inDevice), keyevent(keyevent), play(true) {

    this->device->setWindowCaption(L"Crazy Marble");                    // first windows name
    device->getCursorControl()->setVisible(false);                      // curseur invisible

    this->driver = this->device->getVideoDriver();                      // creation driver
    this->sceneManager = this->device->getSceneManager();               // creation scene manager

    IReadFile* map = createReadFile(pathMap);
    sceneManager->loadScene(map);

    this->player = new Player("Test", 20, sceneManager);

    this->board  = new Board(sceneManager);


    //sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));       // light everywhere

    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = board->getMapMetaSelectorFromNodes(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaSelector, sceneManager);                    // apply collision map to player
    /*
    ICameraSceneNode* test = sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);

    ISceneNodeAnimatorCollisionResponse* anim = sceneManager->createCollisionResponseAnimator(
            metaSelector, // Map collision
            test,  // object player to detect
            vector3df(50,50,50), // hitbox
            vector3df(0, -10, 0)  // gravity vector
    );
    test->addAnimator(anim);
    anim->drop();
    */
    speed = 250;

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

            if (!play){
                break;
            }

        }
	}

}

void Game::updateGameBoard() {
    /*
    board.drawBoard(&windows);
    player.renderPlayer(&windows);

    windows.display();
    windows.clear();
    */

    driver->beginScene(true, true,
                       video::SColor(                  // contient la couleur blanc
                               255,                                   // composante A alpha (transparence)
                               255,                                   // composante R rouge
                               255,                                   // composante G verte
                               255));
    sceneManager->drawAll();                    // calcule le rendu
    driver->endScene();

}

void Game::keyboardChecker(f32 deltaTime) {
    // Init moving vector
    core::vector3df vector(0.0f,0.0f,0.0f);

    // Check all key
    if(keyevent->IsKeyDown(KEY_KEY_Z)){
        vector.X += -speed * deltaTime;
        vector.Z += -speed * deltaTime;
    }
    else if(keyevent->IsKeyDown(KEY_KEY_S)){
        vector.X += speed * deltaTime;
        vector.Z += speed * deltaTime;
    }
    if(keyevent->IsKeyDown(KEY_KEY_Q)){
        vector.X += speed * deltaTime;
        vector.Z += -speed/2 * deltaTime;
    }
    else if(keyevent->IsKeyDown(KEY_KEY_D)){
        vector.X += -speed * deltaTime;
        vector.Z += speed/2 * deltaTime;
    }

    // apply moving to player
    player->updatePosition(vector);


    if(keyevent->IsKeyDown(KEY_KEY_P)){
        player->updateFOV(0.005);
    } else if(keyevent->IsKeyDown(KEY_KEY_O)){
        player->updateFOV(-0.005);
    }

    // quit event

    if (keyevent->IsKeyDown(KEY_ESCAPE)){
        play = false;
    }

}

Game::~Game() {

    sceneManager->clear();
    //driver->drop();

	delete player;
    //delete board;
    
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




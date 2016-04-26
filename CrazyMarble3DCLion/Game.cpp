//
// Created by mathieu on 23/02/16.
//

#include "Game.h"

Game::Game(unsigned int x, unsigned int y, bool day) : width(1920), height(1080), zoom(0.5), device(nullptr){

	
	this->device = createDevice(										// creation device
		video::EDT_OPENGL,											    // l'API est OpenGL
		core::dimension2d<u32>(width, height),							// taille de la fenetre 800x600
		16, false, true);
    this->device->setWindowCaption(L"Crazy Marble");                    // first windows name
    device->getCursorControl()->setVisible(false);                      // curseur invisible

	this->driver = this->device->getVideoDriver();                      // creation driver
	this->sceneManager = this->device->getSceneManager();               // creation scene manager


    // Load Textures
    TextureLoader::LoadingTextures(driver, sceneManager);

    // OPTIONAL
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

    // SkyDome test
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

	SKeyMap keyMap[4];
	keyMap[0].Action = EKA_MOVE_FORWARD;   // avancer
	keyMap[0].KeyCode = KEY_KEY_Z;
	keyMap[1].Action = EKA_MOVE_BACKWARD;  // reculer
	keyMap[1].KeyCode = KEY_KEY_S;
	keyMap[2].Action = EKA_STRAFE_LEFT;    // a gauche
	keyMap[2].KeyCode = KEY_KEY_Q;
	keyMap[3].Action = EKA_STRAFE_RIGHT;   // a droite
	keyMap[3].KeyCode = KEY_KEY_D;

    // To change
    /*
    fpsCamera = sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1, keyMap, 4);    // create camera (to change /
                                                                                        // fix to player)
    //fpsCamera->setPosition(vector3df(x*Cell::size,600.0f,y*Cell::size));                // init camera pos
    fpsCamera->setPosition(vector3df(850,300,850));
    */

    // COLLISION : GRAVITY

    // plateau de selector collision
    IMetaTriangleSelector* metaSelector = board->getMapMetaSelector(sceneManager);      // create decor collision data

    // Apply gravity to player :
    player->enableCollision(metaSelector, sceneManager);                    // apply collision map to player

}

void Game::gameLoop() {

    int lastFPS = -1;

	while (device->run()){
        if (device->isWindowActive()){                                      // test if windows is active

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

            //keyboardChecker();

        }
	}

    // drop every loading image / node / model / all
	device->drop();

}

void Game::updateView() {
    /*
    int margeSize = 50;

    Vector2f pos = player.getPosition();
    int temp = (margeSize / 2) - (width / 2);
    pos.x += temp;
    temp = (margeSize / 2) - (height / 2);
    pos.y += temp;
    view.reset(FloatRect(pos.x, pos.y, width, height));
    view.zoom(this->zoom);
    windows.setView(view);
    */
}

void Game::updateGameBoard() {
    /*
    updateView();
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

void Game::eventChecker() {
    /*
    if (event.type == Event::Closed) windows.close();

    if (event.type == sf::Event::MouseWheelMoved) {
        zoom += event.mouseWheel.delta * -0.1;
        if (zoom < 0.1){
            zoom = 0.1;
        }
    }

    if (Mouse::isButtonPressed(Mouse::Right)) {
        std::cout << player.getPosition().x << " / " << player.getPosition().y << ", m : " << board.getMidleBoard() << std::endl;
    }*/

}

void Game::keyboardChecker() {

    /*
    if (windows.hasFocus()) {
        if (Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::Z)) {
            player.move(Position(0, -1 * speed));
        }
        if (Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S)) {
            player.move(Position(0, speed));
        }
        if (Keyboard::isKeyPressed(Keyboard::Right) || Keyboard::isKeyPressed(Keyboard::D)) {
            player.move(Position(speed, 0));
        }
        if (Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::Q)) {
            player.move(Position(-1 * speed, 0));
        }


        // Music Control //

        if (Keyboard::isKeyPressed(Keyboard::M)){
            SoundUtils::MuteSong();
        }
        if (Keyboard::isKeyPressed(Keyboard::P)){
            SoundUtils::UnMute();
        }
        if (Keyboard::isKeyPressed(Keyboard::O)) {
            SoundUtils::UpSong();
        }
        else if (Keyboard::isKeyPressed(Keyboard::L)) {
            SoundUtils::DownSong();
        }

    }
    */
}

Game::~Game() {
	delete player;
    delete board;
    
}
//
// Created by mathieu on 23/02/16.
//

#include "Game.h"

Game::Game(unsigned int x, unsigned int y) : width(1280), height(720), board(Board(x, y)), zoom(0.5),
device(nullptr){

	
	this->device = createDevice(										// creation device
		video::EDT_OPENGL,											     // l'API est OpenGL
		core::dimension2d<u32>(width, height),							 // taille de la fenetre 800x600
		16, false, true);
    this->device->setWindowCaption(L"Crazy Marble");
    device->getCursorControl()->setVisible(false);                      // curseur invisible

	this->driver = this->device->getVideoDriver();                       // creation driver
	this->sceneManager = this->device->getSceneManager();                // creation scene manager

    // OPTIONAL
    sceneManager->addSkyBoxSceneNode(
            driver->getTexture("data/../../irrlicht-1.8.3/media/water.jpg"), //Sky
            driver->getTexture("data/../../irrlicht-1.8.3/media/wall.bmp"),  //sol
            driver->getTexture("data/../../irrlicht-1.8.3/media/wall.bmp"),  //left
            driver->getTexture("data/../../irrlicht-1.8.3/media/wall.bmp"),  //right
            driver->getTexture("data/../../irrlicht-1.8.3/media/wall.bmp"),  //forward
            driver->getTexture("data/../../irrlicht-1.8.3/media/wall.bmp")); //backward


    //this->player = new Player("Test", 20, sceneManager, driver);


    sceneManager->addLightSceneNode(0, core::vector3df(0, 0, 20),
                            video::SColorf(1.0f, 1.0f, 1.0f), 1000.0f, -1);

    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));

    // Load Textures
    TextureLoader::LoadingTextures(driver);

	/* MODELE */
/*
    driver->getOverrideMaterial().EnableFlags =         // indique que le flag EMF_WIREFRAME
            irr::video::EMF_WIREFRAME;                        // va etre outrepasse
    driver->getOverrideMaterial().Material.setFlag(     // active le flag EMF_WIREFRAME
            irr::video::EMF_WIREFRAME, true);                 // de l'override material
    driver->getOverrideMaterial().EnablePasses =        // indique le type de node affectes
            irr::scene::ESNRP_SOLID;                          // par l'override material
*/

    /* CUBE */
/*
    irr::scene::IMeshSceneNode* cube =         // pointeur vers le node
            sceneManager->addCubeSceneNode(        // la creation du cube
                    10.0f,                             // cote de 10 unites
                    0,                                 // parent = racine
                    -1,                                // pas d'ID
                    irr::core::vector3df(              // le vecteur de position
                            0.0f,                          // origine en X
                            30.0f,                          // origine en Y
                            20.0f));                       // +20 unites en Z

    cube->setMaterialFlag(irr::video::EMF_LIGHTING, true);
	cube->setMaterialTexture(0, driver->addRenderTargetTexture(core::dimension2d<u32>(64,64),"data/tile.jpg"));
*/

    test = sceneManager->addCubeSceneNode(64.0f, 0, -1,
                                          core::vector3df(0, 10, 20));

    test->setPosition(core::vector3df(0.0f,30.0f,50.0f));
    test->setScale(core::vector3df(1.0f,2.0f,1.0f));
    test->setMaterialTexture(0,
                             driver->getTexture("data/skybox_texture.jpg"));

    test->setVisible(false);


    cubeMesh = sceneManager->getMesh("data/model/cube.3ds");

    cube_node = sceneManager->addMeshSceneNode(cubeMesh);
    //cube_node->setScale(core::vector3df(1.0f,1.0f,1.0f));
    cube_node->setPosition(core::vector3df(0.0f,-500.0f,50.0f));

    cube_node->setMaterialTexture(0, driver->getTexture("data/model/cube_color.png"));
    //cube_node->getMaterial(0) = material;

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

	//sceneManager->addCameraSceneNodeFPS(0, 100.0f, 0.1f, -1, keyMap, 4);
    fpsCamera = sceneManager->addCameraSceneNodeFPS(0, 100.0f, 0.1f, -1, keyMap, 4);

    //sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));


	speed = 2;
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

void Game::gameLoop() {

    int lastFPS = -1;

	while (device->run()){
        if (device->isWindowActive()){

            driver->beginScene(true,true, video::SColor(255,100,101,140));
            sceneManager->drawAll();
            driver->endScene();


            // display frames per second in window title
            int fps = driver->getFPS();
            if (lastFPS != fps)
            {
                core::stringw str = L"Irrlicht Engine - Render to Texture and Specular Highlights example";
                str += " FPS:";
                str += fps;

                device->setWindowCaption(str.c_str());
                lastFPS = fps;
            }

            //updateGameBoard();

        }
		/*while (windows.pollEvent(event)){
			eventChecker(event);
		}*/
		//keyboardChecker();


		/*Time fps = clock.getElapsedTime();
		count++;
		if (fps.asSeconds() >= 1){
			std::cout << "FPS : " << count << std::endl;
			count = 0;
			clock.restart();
		}
		*/
	}

	device->drop();

}

Game::~Game() {

	delete player;
    
}
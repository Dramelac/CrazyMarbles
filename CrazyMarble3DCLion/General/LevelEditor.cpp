//
// Created by mathieu on 03/05/16.
//

#include "LevelEditor.h"

LevelEditor::LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyevent, bool day) :
        device(device), keyevent(keyevent), play(true), board(50), cursor(vector3di(0, 0, 0)),
        currentType(0), currentRotation(vector3df(0, 0, 0)) {

    this->driver = this->device->getVideoDriver();                      // creation driver
    this->sceneManager = this->device->getSceneManager();               // creation scene manager
    gui = device->getGUIEnvironment();


    rightRotation = gui->addButton(rect<s32>(70,600,100,630), 0, 102, L"RR");
    leftRotation = gui->addButton(rect<s32>(20,600,50,630), 0, 102, L"LR");
    lvlUp = gui->addButton(rect<s32>(45,550,75,580), 0, 102, L"Lu");
    lvlDown = gui->addButton(rect<s32>(45,650,75,680), 0, 102, L"LD");


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

    // light everywhere
    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));

    //sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);
    fixeCamera = sceneManager->addCameraSceneNode(0, vector3df(50.0f,150.0f,50.0f), vector3df(0, 0, 0));

}


void LevelEditor::gameLoop() {
    int lastFPS = -1;
    while (device->run()){

        if (device->isWindowActive()){                                      // check if windows is active

            driver->beginScene(true,true, video::SColor(255,0,0,0));        // font default color

            sceneManager->drawAll();                                        // update display
            gui->drawAll();

            driver->endScene();
            if(rightRotation->isPressed()){

            }else if (leftRotation->isPressed()){

            }else if (lvlUp->isPressed()){

            }else if (lvlDown->isPressed()){

            }/*else if (goToRight->isPressed()){

            }else if (goToLeft->isPressed()){

            }else if (goToTop->isPressed()){

            }else if (goToDown->isPressed()){

            }*/


            // display frames per second in window title
            int fps = driver->getFPS();
            if (lastFPS != fps)
            {
                core::stringw title = L"Crazy Marble - 2DEV - Level Editor [FPS:";
                title += fps;
                title += "]";

                device->setWindowCaption(title.c_str());
                lastFPS = fps;
            }

            keyboardChecker();

            if (!play){
                break;
            }

        }
    }
}


void LevelEditor::keyboardChecker() {

    // quit event
    if (keyevent->IsKeyDown(KEY_ESCAPE)){
        play = false;
    }

}


void LevelEditor::move(vector3di change) {
    cursor += change;
    if (cursor.X >= size){
        cursor.X = size-1;
    }
    if (cursor.Y>= size){
        cursor.Y= size-1;
    }
    if (cursor.Z >= size){
        cursor.Z = size-1;
    }
}


void LevelEditor::applySetup() {
    board.setupCell(sceneManager, cursor, currentType, currentRotation);
}

LevelEditor::~LevelEditor() {
    /*
    goToRight->remove();
    goToLeft->remove();
    goToTop->remove();
    goToDown->remove();
    */
    rightRotation->remove();
    leftRotation->remove();
    lvlUp->remove();
    lvlDown->remove();
}
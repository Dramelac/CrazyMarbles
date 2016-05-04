//
// Created by mathieu on 03/05/16.
//

#include "LevelEditor.h"

LevelEditor::LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyevent, s32 size, bool day) :
        device(device), keyevent(keyevent), play(true), board(50), cursor(vector3di(0, 0, 0)),
        currentType(0), currentRotation(vector3df(0, 0, 0)), size(size) {

    this->driver = this->device->getVideoDriver();                      // creation driver
    this->sceneManager = this->device->getSceneManager();               // creation scene manager
    gui = device->getGUIEnvironment();


    goToRight = gui->addButton(rect<s32>(300,600,420,650), 0, 102, L"GTR");
    goToLeft = gui->addButton(rect<s32>(100,600,220,650), 0, 102, L"GTL");
    goToTop = gui->addButton(rect<s32>(235,465,285,590), 0, 102, L"GTT");
    goToDown = gui->addButton(rect<s32>(235,660,285,785), 0, 102, L"GTD");

    rightRotation = gui->addButton(rect<s32>(1700,530,1820,650), 0, 102, L"RR");
    leftRotation = gui->addButton(rect<s32>(1500,530,1620,650), 0, 102, L"LR");
    lvlUp = gui->addButton(rect<s32>(1635,400,1685,500), 0, 102, L"LU");
    lvlDown = gui->addButton(rect<s32>(1635,680,1685,780), 0, 102, L"LD");

    cellFlat = gui->addButton(rect<s32>(840,880,920,1080), 0, 102, L"C1");
    cellPente = gui->addButton(rect<s32>(920,880,1000,1080), 0, 102, L"C2");
    cellAngle = gui->addButton(rect<s32>(1000,880,1080,1080), 0, 102, L"C3");
    cellAngleInt = gui->addButton(rect<s32>(1080,880,1160,1080), 0, 102, L"C4");

    validate = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Valider");


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
    fixeCamera->setFarValue(15000);
    updateCamera();


    // TEMP
    board.setupCell(sceneManager, cursor);

}


void LevelEditor::gameLoop() {
    int lastFPS = -1;
    while (device->run()){

        if (device->isWindowActive()){                                      // check if windows is active

            driver->beginScene(true,true, video::SColor(255,0,0,0));        // font default color

            sceneManager->drawAll();                                        // update display
            gui->drawAll();

            driver->endScene();
            bool update = false;

            if(rightRotation->isPressed()){
                update = true;
                currentRotation.Y += 90;
            }else if (leftRotation->isPressed()){
                update = true;
                currentRotation.Y -= 90;
            }

            if (lvlUp->isPressed()){
                update = true;
                cursor.Z -= 1;
            }else if (lvlDown->isPressed()){
                update = true;
                cursor.Z += 1;
            }

            if (goToRight->isPressed()){
                move(vector3di(-1,0,0));
            }else if (goToLeft->isPressed()){
                move(vector3di(1,0,0));
            }else if (goToTop->isPressed()){
                move(vector3di(0,-1,0));
            }else if (goToDown->isPressed()){
                move(vector3di(0,1,0));
            }

            if (cellAngle->isPressed()){
                update = true;
                currentType = 2;
            }else if (cellAngleInt->isPressed()){
                update = true;
                currentType = 3;
            }else if (cellFlat->isPressed()){
                update = true;
                currentType = 0;
            }else if (cellPente->isPressed()){
                update = true;
                currentType = 1;
            }

            if(validate->isPressed()){

            }

            if (update){
                applySetup();
            }


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
    if (cursor.X < 0){
        cursor.X = 0;
    }
    if (cursor.Y>= size){
        cursor.Y= size-1;
    }
    if (cursor.Y < 0){
        cursor.Y = 0;
    }
    updateCamera();
}


void LevelEditor::updateCamera() {
    vector3df cameraPos = vector3df();
    cameraPos.X = cursor.X * Cell::size;
    cameraPos.Z = cursor.Y * Cell::size;
    cameraPos.Y = cursor.Z * Cell::size;
    vector3df lookAt = vector3df(cameraPos);
    cameraPos += vector3df(800.0f, 700.0f, 800.0f);
    fixeCamera->setPosition(cameraPos);
    fixeCamera->setTarget(lookAt);
}


void LevelEditor::applySetup() {
    board.setupCell(sceneManager, cursor, currentType, currentRotation);
    updateCamera();
}

LevelEditor::~LevelEditor() {

    goToRight->remove();
    goToLeft->remove();
    goToTop->remove();
    goToDown->remove();

    rightRotation->remove();
    leftRotation->remove();
    lvlUp->remove();
    lvlDown->remove();


    cellFlat->remove();
    cellPente->remove();
    cellAngle->remove();
    cellAngleInt->remove();

    validate->remove();


}
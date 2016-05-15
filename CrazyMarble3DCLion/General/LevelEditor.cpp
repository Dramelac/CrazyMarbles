//
// Created by mathieu on 03/05/16.
//

#include <stdio.h>
#include <iostream>
#include "LevelEditor.h"

const u16 LevelEditor::size = 50;

LevelEditor::LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent) :
        GUIBase(device, keyEvent), play(true), cursor(vector3di(0, 0, 0)),
        currentType(0), currentRotation(vector3di(0, 0, 0)) {

    this->sceneManager = this->device->getSceneManager();               // creation scene manager

    board = new Board(sceneManager, size);
    player = new Player(sceneManager);

    setupGUI();

    skyBox = sceneManager->addSkyBoxSceneNode(
            driver->getTexture("data/skybox/day/top.png"),
            driver->getTexture("data/skybox/day/bottom.png"),
            driver->getTexture("data/skybox/day/front.png"),
            driver->getTexture("data/skybox/day/back.png"),
            driver->getTexture("data/skybox/day/left.png"),
            driver->getTexture("data/skybox/day/right.png"));
    skyBox->setID(80);
    skyBox->setName("skybox");
    skyId = 0;

    // light everywhere
    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));

    //fixeCamera = sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);
    updateCamera();


    // TEMP
    board->getCell(cursor)->setup(sceneManager, cursor);
    name = "";

    campaignMapList = SideMapList(device->getGUIEnvironment());

}


LevelEditor::LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent, path pathMap)
        : GUIBase(device, keyEvent), play(true), cursor(vector3di(0, 0, 0)),
          currentType(0), currentRotation(vector3di(0, 0, 0)){

    this->driver = this->device->getVideoDriver();                      // creation driver
    this->sceneManager = this->device->getSceneManager();               // creation scene manager
    gui = device->getGUIEnvironment();

    IReadFile* map = createReadFile(pathMap);
    sceneManager->loadScene(map);

    board = new Board(sceneManager);
    player = new Player(sceneManager);

    setupGUI();

    skyBox = sceneManager->getSceneNodeFromName("skybox");
    skyId = skyBox->getID() - 80;

    // light everywhere
    sceneManager->setAmbientLight(video::SColorf(255.0,255.0,255.0));

    //fixeCamera = sceneManager->addCameraSceneNodeFPS(0, 200.0f, 0.1f, -1);
    updateCamera();

    campaignMapList = SideMapList(device->getGUIEnvironment());

    name = pathMap.subString((u32)pathMap.findLastChar("/") + 1, pathMap.size());

}


void LevelEditor::gameLoop() {
    int lastFPS = -1;
    while (device->run()){

        if (device->isWindowActive()){                                      // check if windows is active

            driver->beginScene(true,true, video::SColor(255,0,0,0));        // font default color

            sceneManager->drawAll();                                        // update display
            gui->drawAll();

            driver->endScene();


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

    bool update = false;

    campaignMapList.checkEvent();

    if (cellStartBox->isPressed() ||keyEvent->IsKeyDown(KEY_SPACE, true)){
        board->setupStartPoint(cursor);
        cellStartBox->setPressed(false);
    }

    if (cellFinish->isPressed() || keyEvent->IsKeyDown(KEY_KEY_F, true)){
        board->getCell(cursor)->switchFinishType();
        cellFinish->setPressed(false);
    }

    if (skyBoxe->isPressed() || keyEvent->IsKeyDown(KEY_KEY_S, true)){
        skyId = (skyId + 1) % 3;
        setupSkyBox(skyId);
        skyBoxe->setPressed(false);
    }

    if (cellEnemy->isPressed() || keyEvent->IsKeyDown(KEY_KEY_B, true)){
        board->getCell(cursor)->switchEntity(new BlackMarbles(sceneManager,
                                                              vector3df(cursor.X * Cell::size,
                                                                        (cursor.Z * -Cell::size) - 200,
                                                                        cursor.Y * Cell::size),
                                                              (cursor.X * LevelEditor::size) + cursor.Y + 3500));
        cellEnemy->setPressed(false);
    }

    if(rightRotation->isPressed() || keyEvent->IsKeyDown(KEY_KEY_I, true)){
        update = true;
        currentRotation.Y -= 90;
        currentRotation.Y %= 360;
        rightRotation->setPressed(false);
    }else if (leftRotation->isPressed() || keyEvent->IsKeyDown(KEY_KEY_O, true)){
        update = true;
        currentRotation.Y += 90;
        currentRotation.Y %= 360;
        leftRotation->setPressed(false);
    }

    if (lvlUp->isPressed() || keyEvent->IsKeyDown(KEY_KEY_P, true)){
        update = true;
        cursor.Z -= 1;
        lvlUp->setPressed(false);
    }else if (lvlDown->isPressed() || keyEvent->IsKeyDown(KEY_KEY_M, true)){
        update = true;
        cursor.Z += 1;
        lvlDown->setPressed(false);
    }

    if (goToRight->isPressed() || keyEvent->IsKeyDown(KEY_RIGHT, true)){
        move(vector3di(-1,0,0));
        goToRight->setPressed(false);
    }else if (goToLeft->isPressed() || keyEvent->IsKeyDown(KEY_LEFT, true)){
        move(vector3di(1,0,0));
        goToLeft->setPressed(false);
    }else if (goToTop->isPressed()  || keyEvent->IsKeyDown(KEY_UP, true)){
        move(vector3di(0,-1,0));
        goToTop->setPressed(false);
    }else if (goToDown->isPressed() || keyEvent->IsKeyDown(KEY_DOWN, true)){
        move(vector3di(0,1,0));
        goToDown->setPressed(false);
    }


    if (cellFlat->isPressed() || keyEvent->IsKeyDown(KEY_KEY_A, true)){
        update = true;
        currentType = 0;
        cellFlat->setPressed(false);
    }else if (cellPente->isPressed() || keyEvent->IsKeyDown(KEY_KEY_Z, true)){
        update = true;
        currentType = 1;
        cellPente->setPressed(false);
    } else if (cellAngle->isPressed() || keyEvent->IsKeyDown(KEY_KEY_E, true)) {
        update = true;
        currentType = 2;
        cellAngle->setPressed(false);
    }else if (cellAngleInt->isPressed() || keyEvent->IsKeyDown(KEY_KEY_R, true)){
        update = true;
        currentType = 3;
        cellAngleInt->setPressed(false);
    }else if (cellEmpty->isPressed() || keyEvent->IsKeyDown(KEY_BACK, true)){
        update = true;
        currentType = 4;
        cellEmpty->setPressed(false);
    }

    if (update){
        applySetup();
    }

    if(validate->isPressed()){
        save();
        play = false;
    }

    // quit event
    if (keyEvent->IsKeyDown(KEY_ESCAPE, true)){
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
    cursor.Z = board->getCell(cursor)->getCurrentLevel(cursor.Z);
    updateCamera();
}


void LevelEditor::updateCamera() {

    vector3df cameraPos = vector3df();
    cameraPos.X = cursor.X * Cell::size;
    cameraPos.Z = cursor.Y * Cell::size;
    cameraPos.Y = (cursor.Z * -Cell::size) - 250;
    vector3df lookAt = vector3df(cameraPos);

    player->setPosition(lookAt);
    player->updateCamera();
}


void LevelEditor::applySetup() {
    board->getCell(cursor)->setup(sceneManager, cursor, currentType, currentRotation);
    updateCamera();
}


void LevelEditor::setupSkyBox(s32 templateId) {
    skyBox->remove();
    switch (templateId){
        case 0:
            skyBox = sceneManager->addSkyBoxSceneNode(
                    driver->getTexture("data/skybox/day/top.png"),
                    driver->getTexture("data/skybox/day/bottom.png"),
                    driver->getTexture("data/skybox/day/front.png"),
                    driver->getTexture("data/skybox/day/back.png"),
                    driver->getTexture("data/skybox/day/left.png"),
                    driver->getTexture("data/skybox/day/right.png"));
            skyBox->setID(80);
            break;
        case 1:
            skyBox = sceneManager->addSkyBoxSceneNode(
                    driver->getTexture("data/skybox/night/top.png"),
                    driver->getTexture("data/skybox/night/bottom.png"),
                    driver->getTexture("data/skybox/night/front.png"),
                    driver->getTexture("data/skybox/night/back.png"),
                    driver->getTexture("data/skybox/night/left.png"),
                    driver->getTexture("data/skybox/night/right.png"));
            skyBox->setID(81);
            break;
        case 2:
            skyBox = sceneManager->addSkyDomeSceneNode(driver->getTexture("data/skybox/skydome.jpg"));
            skyBox->setID(82);
            break;
        default:
            break;
    }
    skyBox->setName("skybox");
}


void LevelEditor::save() {
    while (name == ""){
        setupName();
    }
    //player->removePlayerNode();
    //player->removeCameraNode();
    delete player;

    io::IWriteFile* file = io::createWriteFile(name, false);
    sceneManager->saveScene(file);
    file->drop();

    std::string result = "data/Maps/";
    result += name.c_str();
    rename(name.c_str(), result.c_str());
}


void LevelEditor::setupName() {
    // TODO select name
    name = "temp";

    // add extension
    name += ".irr";
}


LevelEditor::~LevelEditor() {
    delete board;

    goToRight->remove();
    goToLeft->remove();
    goToTop->remove();
    goToDown->remove();

    rightRotation->remove();
    leftRotation->remove();
    lvlUp->remove();
    lvlDown->remove();

    cellEmpty->remove();
    cellFlat->remove();
    cellPente->remove();
    cellAngle->remove();
    cellAngleInt->remove();
    cellFinish->remove();
    cellEnemy->remove();

    skyBoxe->remove();
    cellStartBox->remove();

    validate->remove();

    sceneManager->clear();

}

void LevelEditor::setupGUI() {

    /**
     * SETUP POSITION
     */

    goToRight = gui->addButton(rect<s32>(230,510,350,630), 0, 102);
    goToLeft = gui->addButton(rect<s32>(100,640,220,760), 0, 102);
    goToTop = gui->addButton(rect<s32>(100,510,220,630), 0, 102);
    goToDown = gui->addButton(rect<s32>(230,640,350,760), 0, 102);

    rightRotation = gui->addButton(rect<s32>(1700,530,1820,650), 0, 102, L"O");
    leftRotation = gui->addButton(rect<s32>(1500,530,1620,650), 0, 102, L"I");
    lvlUp = gui->addButton(rect<s32>(1635,400,1685,500), 0, 102, L"P");
    lvlDown = gui->addButton(rect<s32>(1635,680,1685,780), 0, 102, L"M");

    cellFinish = gui->addButton(rect<s32>(680,880,760,1080), 0, 102,L"Y");
    cellEmpty = gui->addButton(rect<s32>(760,880,840,1080), 0, 102, L"EMPTY");
    cellFlat = gui->addButton(rect<s32>(840,880,920,1080), 0, 102, L"A");
    cellPente = gui->addButton(rect<s32>(920,880,1000,1080), 0, 102, L"Z");
    cellAngle = gui->addButton(rect<s32>(1000,880,1080,1080), 0, 102, L"E");
    cellAngleInt = gui->addButton(rect<s32>(1080,880,1160,1080), 0, 102, L"R");
    cellEnemy = gui->addButton(rect<s32>(1160,880,1240,1080),0,102,L"T");

    cellStartBox = gui->addButton(rect<s32>(1240,880,1320,1080),0,102,L"U");
    skyBoxe = gui->addButton(rect<s32>(20,320,60,360),0,102,L"S");



    validate = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Valider");


    /**
     *  SETUP IMAGES
     */

    // MOVING
    goToRight->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/arrow_to_right.png"));
    goToRight->setUseAlphaChannel(true);
    goToRight->setScaleImage(true);
    //goToRight->setPressedImage(driver->getTexture("data/GUI/play_jaune_01.png"));
    goToRight->setDrawBorder(false);
    goToLeft->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/arrow_to_left.png"));
    goToLeft->setUseAlphaChannel(true);
    goToLeft->setScaleImage(true);
    goToLeft->setDrawBorder(false);

    goToTop->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/arrow_to_top.png"));
    goToTop->setUseAlphaChannel(true);
    goToTop->setScaleImage(true);
    goToTop->setDrawBorder(false);

    goToDown->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/arrow_to_down.png"));
    goToDown->setUseAlphaChannel(true);
    goToDown->setScaleImage(true);
    goToDown->setDrawBorder(false);

    // POSITION
    lvlUp->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/lvl_up.png"));
    lvlUp->setUseAlphaChannel(true);
    lvlUp->setScaleImage(true);
    lvlUp->setDrawBorder(false);

    lvlDown->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/lvl_down.png"));
    lvlDown->setUseAlphaChannel(true);
    lvlDown->setScaleImage(true);
    lvlDown->setDrawBorder(false);

    leftRotation->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/rotation_left.png"));
    leftRotation->setUseAlphaChannel(true);
    leftRotation->setScaleImage(true);
    leftRotation->setDrawBorder(false);

    rightRotation->setImage(driver->getTexture("data/GUI/LevelEditor/Arrow/rotation_right.png"));
    rightRotation->setUseAlphaChannel(true);
    rightRotation->setScaleImage(true);
    rightRotation->setDrawBorder(false);

    // MODELS
    cellFlat->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell.png"));
    cellFlat->setScaleImage();
    cellPente->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_pente.png"));
    cellPente->setScaleImage();
    cellAngle->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_angle.png"));
    cellAngle->setScaleImage();
    cellAngleInt->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_angle_int.png"));
    cellAngleInt->setScaleImage();
    //cellStartBox->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_angle_int.png"));
    //cellStartBox->setScaleImage();
    //cellFinish->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_finish.png"));
    //cellFinish->setScaleImage();
    //cellEnemy->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_enemy.png"));
    //cellEnemy->setScaleImage();

    //skyBoxe->setImage(driver->getTexture("data/GUI/LevelEditor/Models/Cell_sky_box.png"));
    //skyBoxe->setScaleImage();



}


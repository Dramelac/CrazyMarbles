//
// Created by mathieu on 26/04/16.
//

#include "Menu.h"
#include "Game.h"
#include "LevelEditor.h"

Menu::Menu(IrrlichtDevice *inDevice, KeyboardEvent *keyEvent) : keyEvent(keyEvent) {
    device = inDevice;
    gui = device->getGUIEnvironment();
    driver = device->getVideoDriver();

    this->device->setWindowCaption(L"Crazy Marble  -  [MENU]");
    device->getCursorControl()->setVisible(true);


    gui->addImage(driver->getTexture("data/GUI/BGCM.png"), position2d<int>(0, 0));

    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Quit", L"Exits Program");
    game = gui->addButton(rect<s32>(600,400,1320,500), 0, 102, L"PLAY");
    scoreBoard = gui->addButton(rect<s32>(600,550,1320,650), 0, 103, L"ScoreBoard");
    levelEditor = gui->addButton(rect<s32>(600, 700, 1320, 800),0,104, L"Level Editor");
    credit = gui->addButton(rect<s32>(600, 850, 1320, 950),0,104, L"Credit");
    game->setImage(driver->getTexture("data/GUI/BGCM.png"));
    game->setScaleImage(true);
}


void Menu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed()){
                device->closeDevice();
            } else if (game->isPressed()){
                Game game(device, keyEvent, 50, 50);
                game.gameLoop();
                device->getCursorControl()->setVisible(true);
            } else if (scoreBoard->isPressed()){

            } else if (levelEditor->isPressed()){
                LevelEditor levelEditor(device, keyEvent);
                levelEditor.gameLoop();
            } else if (credit->isPressed()){

            }
        }
    }
}

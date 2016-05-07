//
// Created by mathieu on 26/04/16.
//

#include "Menu.h"

Menu::Menu(IrrlichtDevice *inDevice, KeyboardEvent *keyEvent)
        : keyEvent(keyEvent){
    device = inDevice;
    gui = device->getGUIEnvironment();
    driver = device->getVideoDriver();

    this->device->setWindowCaption(L"Crazy Marble  -  [MENU]");
    device->getCursorControl()->setVisible(true);


    NickMenu nickMenu(device, keyEvent);
    nickMenu.loop();


    background = gui->addImage(driver->getTexture("data/GUI/Menu/BGCM2.png"), position2d<int>(0, 0));

    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Quit", L"Exits Program");

    play = gui->addButton(rect<s32>(657,400,1263,545), 0, 102, L"");
    play->setImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_play_selected.png"));
    play->setPressedImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_play_pressed.png"));
    play->setDrawBorder(false);
    play->setUseAlphaChannel(true);

    scoreBoard = gui->addButton(rect<s32>(657,550,1263,695), 0, 103, L"");
    scoreBoard->setImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_scoreboard_selected.png"));
    scoreBoard->setPressedImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_scoreboard_pressed.png"));
    scoreBoard->setDrawBorder(false);
    scoreBoard->setUseAlphaChannel(true);

    levelEditor = gui->addButton(rect<s32>(657, 700, 1263, 845),0,104, L"");
    levelEditor->setImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_level_editor_selected.png"));
    levelEditor->setPressedImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_level_editor_pressed.png"));
    levelEditor->setDrawBorder(false);
    levelEditor->setUseAlphaChannel(true);

    credit = gui->addButton(rect<s32>(657, 850, 1263, 995),0,104, L"");
    credit->setImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_credits_selected.png"));
    credit->setPressedImage(driver->getTexture("data/GUI/Menu/bouton_main_menu_credits_pressed.png"));
    credit->setDrawBorder(false);
    credit->setUseAlphaChannel(true);
    //play->setScaleImage(true);

    gui->addStaticText(L"yolo",irr::core::rect<irr::s32>(1700,20,1820,60),true,true,0 , -1, true);

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
            } else if (play->isPressed()){
                //Game game(device, keyEvent, 50, 50);
                Game game(device, keyEvent, "data/Maps/map.irr");
                game.gameLoop();
                device->getCursorControl()->setVisible(true);
            } else if (scoreBoard->isPressed()){
                

            } else if (levelEditor->isPressed()){
                visibilityButons(false);
                LevelEditor levelEditor(device, keyEvent);
                levelEditor.gameLoop();
                visibilityButons(true);
            } else if (credit->isPressed()){

            }
        }
    }
}

void Menu::visibilityButons(bool status) {
    exit->setVisible(status);
    play->setVisible(status);
    scoreBoard->setVisible(status);
    levelEditor->setVisible(status);
    credit->setVisible(status);
    background->setVisible(status);
}



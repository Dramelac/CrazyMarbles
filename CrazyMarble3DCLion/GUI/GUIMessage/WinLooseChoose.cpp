//
// Created by mathieu on 16/05/16.
//

#include "WinLooseChoose.h"

WinLooseChoose::WinLooseChoose(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringw message, bool win, bool resume)
        : GUIBase(device, keyEvent), win(win || resume) {

    device->getCursorControl()->setVisible(true);
    sceneManager = device->getSceneManager();
    background = gui->addImage(driver->getTexture("data/GUI/Menu/play/popup-background-1.png"), vector2d<s32>(650,300));

    this->message = gui->addStaticText(message.c_str(),rect<s32>(vector2d<s32>(25,25), dimension2d<s32>(480,250)), false, true, background);

    restart = gui->addButton(rect<s32>(vector2d<s32>(25,260), dimension2d<s32>(175,50)), background, -1);
    restart->setImage(driver->getTexture("data/GUI/Menu/play/menu_pause_restart.png"));
    restart->setDrawBorder(false);
    restart->setUseAlphaChannel(true);

    quit = gui->addButton(rect<s32>(vector2d<s32>(225,260), dimension2d<s32>(175,50)), background, -1);
    quit->setImage(driver->getTexture("data/GUI/Menu/play/menu_pause_exit.png"));
    quit->setDrawBorder(false);
    quit->setUseAlphaChannel(true);
    if (win) {
        next = gui->addButton(rect<s32>(vector2d<s32>(425,260), dimension2d<s32>(175,50)), background, -1);
        next->setImage(driver->getTexture("data/GUI/Menu/play/menu_pause_next.png"));
        next->setDrawBorder(false);
        next->setUseAlphaChannel(true);
    } else if (resume){
        next = gui->addButton(rect<s32>(vector2d<s32>(425,260), dimension2d<s32>(175,50)), background, -1);
        next->setImage(driver->getTexture("data/GUI/Menu/play/menu_pause_resume.png"));
        next->setDrawBorder(false);
        next->setUseAlphaChannel(true);
    }
}

WinLooseChoose::~WinLooseChoose() {
    background->removeChild(message);
    background->removeChild(restart);
    background->removeChild(quit);
    if (win) {
        background->removeChild(next);
    }
    background->remove();
    device->getCursorControl()->setVisible(false);
}

s16 WinLooseChoose::loop() {
    while (device->run()){
        driver->beginScene(true,true, video::SColor(255,0,0,0));

        sceneManager->drawAll();
        gui->drawAll();

        driver->endScene();

        if (quit->isPressed()){
            return -1;
        }
        if (win && (next->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true))){
            return 0;
        }
        if (restart->isPressed()){
            return 1;
        }
    }
    return 0;
}

void WinLooseChoose::setupNetwork() {
    restart->setVisible(false);
    if (win) {
        next->setVisible(false);
    }
}

void WinLooseChoose::setText(stringw text) {
    message->setText(text.c_str());
}



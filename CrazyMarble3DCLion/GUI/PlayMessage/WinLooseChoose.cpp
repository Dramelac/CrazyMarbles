//
// Created by mathieu on 16/05/16.
//

#include "WinLooseChoose.h"

WinLooseChoose::WinLooseChoose(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringw message, bool win, bool resume)
        : GUIBase(device, keyEvent), win(win || resume) {

    device->getCursorControl()->setVisible(true);
    sceneManager = device->getSceneManager();
    background = gui->addImage(driver->getTexture("data/GUI/Menu/play/popup-background-1.png"), vector2d<s32>(750,400));

    this->message = gui->addStaticText(message.c_str(),rect<s32>(vector2d<s32>(200,80), dimension2d<s32>(200,400)), false, true, background);
    this->message->setOverrideColor(SColor(255,255,255,255));
    this->message->setOverrideFont(gui->getFont("data/GUI/fonts/font15px.png"));

    restart = gui->addButton(rect<s32>(vector2d<s32>(30,200), dimension2d<s32>(125,50)), background, -1, L"Restart");
    quit = gui->addButton(rect<s32>(vector2d<s32>(175,200), dimension2d<s32>(125,50)), background, -1, L"Exit");
    if (win) {

        next = gui->addButton(rect<s32>(vector2d<s32>(320,200), dimension2d<s32>(125,50)), background, -1, L"Next Level");
    } else if (resume){
        next = gui->addButton(rect<s32>(vector2d<s32>(320,200), dimension2d<s32>(125,50)), background, -1, L"Resume");
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
        if (win && next->isPressed()){
            return 0;
        }
        if (restart->isPressed()){
            return 1;
        }
    }
    return 0;
}





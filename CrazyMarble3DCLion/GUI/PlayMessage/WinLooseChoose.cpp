//
// Created by mathieu on 16/05/16.
//

#include "WinLooseChoose.h"

WinLooseChoose::WinLooseChoose(IrrlichtDevice *device, KeyboardEvent *keyEvent)
        : GUIBase(device, keyEvent) {

    device->getCursorControl()->setVisible(true);
    sceneManager = device->getSceneManager();
    background = gui->addImage(driver->getTexture("data/GUI/Menu/play/popup-background-1.png"), vector2d<s32>(750,400));

    restart = gui->addButton(rect<s32>(vector2d<s32>(30,200), dimension2d<s32>(125,50)), background, -1, L"Restart");
    quit = gui->addButton(rect<s32>(vector2d<s32>(175,200), dimension2d<s32>(125,50)), background, -1, L"Exit");
    next = gui->addButton(rect<s32>(vector2d<s32>(320,200), dimension2d<s32>(125,50)), background, -1, L"Next Level");
}

WinLooseChoose::~WinLooseChoose() {
    background->removeChild(restart);
    background->removeChild(quit);
    background->removeChild(next);
    background->remove();
    device->getCursorControl()->setVisible(false);
}

s16 WinLooseChoose::loop() {
    while (device->run()){
        driver->beginScene(true,true, video::SColor(255,0,0,0));

        sceneManager->drawAll();
        gui->drawAll();

        driver->endScene();

        if (keyEvent->IsKeyDown(KEY_ESCAPE, true)){
            return 0;
        }
    }
    return 0;
}


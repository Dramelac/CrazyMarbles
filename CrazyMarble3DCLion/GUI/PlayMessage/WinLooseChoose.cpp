//
// Created by mathieu on 16/05/16.
//

#include "WinLooseChoose.h"

WinLooseChoose::WinLooseChoose(IrrlichtDevice *device, KeyboardEvent *keyEvent)
        : GUIBase(device, keyEvent) {

    background = gui->addImage(driver->getTexture("data/GUI/Menu/play/popup-background-1.png"), vector2d<s32>(800,800));

}

WinLooseChoose::~WinLooseChoose() {
    background->remove();
}

s16 WinLooseChoose::loop() {
    return 0;
}


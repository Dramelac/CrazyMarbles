//
// Created by mathieu on 14/05/16.
//

#include "GUIBase.h"

GUIBase::GUIBase(IrrlichtDevice *device, KeyboardEvent *keyEvent) :
        device(device), keyEvent(keyEvent) {
    gui = device->getGUIEnvironment();
    driver = device->getVideoDriver();
}
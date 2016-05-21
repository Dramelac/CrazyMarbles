//
// Created by romain on 21/05/16.
//

#include "MenuServer.h"


MenuServer::MenuServer(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background), pseudo(pseudo) {

        exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"Go back");
}
MenuServer::~MenuServer() {
    exit->remove();
}

void MenuServer::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                return;
            }

        }
    }

}

void MenuServer::visibilityButtons(bool status) {
    exit->setVisible(status);
}






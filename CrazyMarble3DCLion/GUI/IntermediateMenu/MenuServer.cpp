//
// Created by romain on 21/05/16.
//

#include "MenuServer.h"


MenuServer::MenuServer(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background), pseudo(pseudo) {
        background->setVisible(true);
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

        editBox = gui->addEditBox(L"", rect<irr::s32>(1000,610,1200,680));
        editBox->setOverrideColor(SColor(255,0,0,0));

        valide = gui->addButton(rect<s32>(890,700,1010,750), 0, 103, L"Valider");

}

void MenuServer::visibilityButtons(bool status) {
    exit->setVisible(status);
}






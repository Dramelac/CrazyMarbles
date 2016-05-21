//
// Created by romain on 21/05/16.
//

#include "MenuServer.h"


MenuServer::MenuServer(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background), pseudo(pseudo) {

    background->setVisible(true);
    exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"Go back");

    ipText = gui->addStaticText(L"Enter Ip : ",rect<s32>(800,630,1200,670));
    ipText->setOverrideColor(SColor(255,0,0,0));
    editBox = gui->addEditBox(L"", rect<s32>(1000,610,1260,680));
    editBox->setOverrideColor(SColor(255,0,0,0));
    valide = gui->addButton(rect<s32>(890,700,1010,750), 0, 103, L"Valider");
}

MenuServer::~MenuServer() {
    ipText->remove();
    editBox->remove();
    valide->remove();
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
            else if (valide->isPressed()){
                visibilityButtons(false);
                stringc temp = editBox->getText();
                temp = "127.0.0.1";
                NetworkMain* networkMain = new NetworkMain(device,keyEvent,"",pseudo, false, temp.c_str());
                networkMain->play();
                delete networkMain;
                return;
            }

        }
    }

}

void MenuServer::visibilityButtons(bool status) {
    background->setVisible(status);
    ipText->setVisible(status);
    editBox->setVisible(status);
    valide->setVisible(status);
    exit->setVisible(status);
}






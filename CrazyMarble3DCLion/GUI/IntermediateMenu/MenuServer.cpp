//
// Created by romain on 21/05/16.
//

#include "MenuServer.h"


MenuServer::MenuServer(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background), pseudo(pseudo) {

        exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"Go back");

}


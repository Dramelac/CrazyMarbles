//
// Created by mathieu on 25/05/16.
//

#include "NetworkMessage.h"

NetworkMessage::NetworkMessage(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringw message, stringw button="")
        : GUIBase(device, keyEvent) {

    text = gui->addStaticText(message.c_str(), rect<s32>(vector2d<s32>(200,200), dimension2d<s32>(1000,250)));
    exit = gui->addButton(rect<s32>(vector2d<s32>(500,400), dimension2d<s32>(200,100)));
    if (button == ""){
        exit->setVisible(false);
    } else {
        exit->setText(button.c_str());
    }

}

virtual NetworkMessage::~NetworkMessage() {
    text->remove();
    exit->remove();
}

bool NetworkMessage::checkStatus() {
    return exit->isPressed();
}


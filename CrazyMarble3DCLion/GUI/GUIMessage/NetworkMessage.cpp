//
// Created by mathieu on 25/05/16.
//

#include "NetworkMessage.h"

NetworkMessage::NetworkMessage(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringw message, stringw button)
        : GUIBase(device, keyEvent) {

    device->getCursorControl()->setVisible(true);

    background = gui->addImage(driver->getTexture("data/GUI/Menu/BGCM2.png"), position2d<int>(0, 0));
    text = gui->addStaticText(message.c_str(), rect<s32>(vector2d<s32>(300,500), dimension2d<s32>(1320,150)));
    text->setTextAlignment(EGUIA_CENTER,EGUIA_CENTER);
    text->setDrawBackground(true);
    exit = gui->addButton(rect<s32>(vector2d<s32>(850,800), dimension2d<s32>(200,75)));
    if (button == ""){
        exit->setVisible(false);
    } else {
        exit->setText(button.c_str());
    }

}

NetworkMessage::~NetworkMessage() {
    background->remove();
    text->remove();
    exit->remove();
}

bool NetworkMessage::checkStatus() {
    driver->beginScene(true,true, video::SColor(255,150,150,150));        // font default color
    gui->drawAll();
    driver->endScene();
    return exit->isPressed();
}

void NetworkMessage::setMessage(stringw message) {
    text->setText(message.c_str());
}

void NetworkMessage::setButtonMessage(stringw message) {
    if (message == "") {
        exit->setVisible(false);
    } else {
        exit->setText(message.c_str());
        exit->setVisible(true);
    }
}



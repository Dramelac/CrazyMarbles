//
// Created by mathieu on 16/05/16.
//

#include "SoloMultiMenu.h"
#include "../../General/Campaign.h"
#include "../../General/Network/NetworkMain.h"

SoloMultiMenu::SoloMultiMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent,
                             IGUIImage* background, stringc pseudo, path map)
        : GUIBase(device, keyEvent), background(background), pseudo(pseudo), map(map) {

    this->background->setVisible(true);
    exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"Go back");
    solo = gui->addButton(rect<s32>(657,550,1263,695), 0, 103, L"Solo");
    multi = gui->addButton(rect<s32>(657, 700, 1263, 845), 0, 103, L"MultiPlayer");

}

SoloMultiMenu::~SoloMultiMenu() {
    exit->remove();
    solo->remove();
    multi->remove();
}

void SoloMultiMenu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                return;
            }

            if (solo->isPressed()){
                visibilityButtons(false);
                Campaign game(device, keyEvent, pseudo, map);
                game.play();
                return;
            } else if (multi->isPressed()){
                //visibilityButtons(false);
                NetworkMain game(device, keyEvent, pseudo, map, true);
                //return;
            }
        }
    }
}

void SoloMultiMenu::visibilityButtons(bool status) {
    solo->setVisible(status);
    multi->setVisible(status);
    background->setVisible(status);
    exit->setVisible(status);
}


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
    exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"");
    exit->setImage(driver->getTexture("data/GUI/Menu/bouton_menu_back.png"));
    exit->setDrawBorder(false);
    exit->setUseAlphaChannel(true);
    exit->setScaleImage(true);
    solo = gui->addButton(rect<s32>(657,400,1263,545), 0, 103, L"");
    solo->setImage(driver->getTexture("data/GUI/Menu/button/bouton_play_solo.png"));
    solo->setDrawBorder(false);
    solo->setUseAlphaChannel(true);
    solo->setScaleImage(true);
    multi = gui->addButton(rect<s32>(657,550,1263,695), 0, 103, L"");
    multi->setImage(driver->getTexture("data/GUI/Menu/button/bouton_play_multi.png"));
    multi->setDrawBorder(false);
    multi->setUseAlphaChannel(true);
    multi->setScaleImage(true);

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
                visibilityButtons(false);
                NetworkMain game(device, keyEvent, map, pseudo, true);
                game.play();
                return;
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


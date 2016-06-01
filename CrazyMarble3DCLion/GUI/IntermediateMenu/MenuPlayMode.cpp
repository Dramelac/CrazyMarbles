//
// Created by mathieu on 15/05/16.
//

#include "MenuPlayMode.h"
#include "../../General/Game.h"
#include "../../General/Campaign.h"
#include "SoloMultiMenu.h"

MenuPlayMode::MenuPlayMode(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background), pseudo(pseudo) {

    exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"");
    exit->setImage(driver->getTexture("data/GUI/Menu/bouton_menu_back.png"));
    exit->setDrawBorder(false);
    exit->setUseAlphaChannel(true);
    campaignButton = gui->addButton(rect<s32>(657,550,1263,695), 0, 103, L"");
    campaignButton->setImage(driver->getTexture("data/GUI/Menu/button/bouton_game_editor_new_map.png"));
    campaignButton->setDrawBorder(false);
    campaignButton->setUseAlphaChannel(true);
    freeModeButton = gui->addButton(rect<s32>(657, 700, 1263, 845), 0, 103, L"Free Mode");
    freeModeButton->setImage(driver->getTexture("data/GUI/Menu/button/bouton_game_editor_load_map.png"));
    freeModeButton->setDrawBorder(false);
    freeModeButton->setUseAlphaChannel(true);
}

void MenuPlayMode::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                return;
            }

            if (campaignButton->isPressed()){
                visibilityButtons(false);
                Campaign campaign(device, keyEvent, pseudo);
                campaign.play();
                return;
            } else if (freeModeButton->isPressed()){
                visibilityButtons(false);

                MapSelector* mapSelect = new MapSelector(device, keyEvent);
                path map = mapSelect->mapSelector();
                delete mapSelect;
                if (map == "") {
                    return;
                }

                SoloMultiMenu game(device, keyEvent, background, pseudo, map);
                game.loop();
                return;
            }
        }
    }
}

MenuPlayMode::~MenuPlayMode() {
    campaignButton->remove();
    freeModeButton->remove();
    exit->remove();
}

void MenuPlayMode::visibilityButtons(bool status) {
    background->setVisible(status);
    campaignButton->setVisible(status);
    freeModeButton->setVisible(status);
    exit->setVisible(status);
}
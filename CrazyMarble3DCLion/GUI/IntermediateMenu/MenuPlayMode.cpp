//
// Created by mathieu on 15/05/16.
//

#include "MenuPlayMode.h"

MenuPlayMode::MenuPlayMode(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background), pseudo(pseudo) {

    exit = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"");
    exit->setImage(driver->getTexture("data/GUI/Menu/bouton_menu_back.png"));
    exit->setDrawBorder(false);
    exit->setUseAlphaChannel(true);
    campaignButton = gui->addButton(rect<s32>(657,400,1263,545), 0, 103, L"");
    campaignButton->setImage(driver->getTexture("data/GUI/Menu/play/bouton_main_menu_campaign.png"));
    campaignButton->setDrawBorder(false);
    campaignButton->setUseAlphaChannel(true);
    freeModeButton = gui->addButton(rect<s32>(657, 550, 1263, 695), 0, 103, L"");
    freeModeButton->setImage(driver->getTexture("data/GUI/Menu/play/bouton_main_menu_free_mode.png"));
    freeModeButton->setDrawBorder(false);
    freeModeButton->setUseAlphaChannel(true);

    joinServerButton = gui->addButton(rect<s32>(657, 700, 1263, 845), 0, 103, L"");
    joinServerButton->setImage(driver->getTexture("data/GUI/Menu/menu_join_server.png"));
    joinServerButton->setDrawBorder(false);
    joinServerButton->setUseAlphaChannel(true);


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
            }else if (joinServerButton->isPressed()) {
                visibilityButtons(false);
                MenuServer menuServer(device,keyEvent,pseudo,background);
                menuServer.loop();
                return;
            }
        }
    }
}

MenuPlayMode::~MenuPlayMode() {
    campaignButton->remove();
    freeModeButton->remove();
    joinServerButton->remove();
    exit->remove();
}

void MenuPlayMode::visibilityButtons(bool status) {
    background->setVisible(status);
    campaignButton->setVisible(status);
    freeModeButton->setVisible(status);
    joinServerButton->setVisible(status);
    exit->setVisible(status);
}
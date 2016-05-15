//
// Created by mathieu on 15/05/16.
//

#include "MenuPlayMode.h"
#include "../../General/Game.h"

MenuPlayMode::MenuPlayMode(IrrlichtDevice *device, KeyboardEvent *keyEvent, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background) {

    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Go back");
    campaignButton = gui->addButton(rect<s32>(657,550,1263,695), 0, 103, L"Campaign");
    freeModeButton = gui->addButton(rect<s32>(657, 700, 1263, 845), 0, 103, L"Free Mode");
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
                // TODO need to merge campaign branch
                return;
            } else if (freeModeButton->isPressed()){
                visibilityButtons(false);

                MapSelector* mapSelect = new MapSelector(device, keyEvent);
                path map = mapSelect->mapSelector();
                delete mapSelect;
                if (map == "") {
                    return;
                }

                Game game(device, keyEvent,map);
                game.gameLoop();
                return;
            }
        }
    }
}

MenuPlayMode::~MenuLevelEditor() {
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
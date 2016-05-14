//
// Created by mathieu on 14/05/16.
//

#include "MenuLevelEditor.h"
#include "MapMenu/MapSelector.h"

MenuLevelEditor::MenuLevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent, IGUIImage* background) :
        GUIBase(device, keyEvent), background(background) {

    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Go back");
    newMap = gui->addButton(rect<s32>(657,550,1263,695), 0, 103, L"New Map");
    loadMap = gui->addButton(rect<s32>(657, 700, 1263, 845), 0, 103, L"Load Existing Map");

}

void MenuLevelEditor::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                return;
            }

            if (newMap->isPressed()){
                visibilityButtons(false);
                LevelEditor levelEditor(device, keyEvent);
                levelEditor.gameLoop();
                return;
            } else if (loadMap->isPressed()){
                visibilityButtons(false);
                MapSelector mapSelect(device, keyEvent);
                path map = mapSelect.mapSelector();
                LevelEditor levelEditor(device, keyEvent, map);
                levelEditor.gameLoop();
                return;
            }
        }
    }
}

MenuLevelEditor::~MenuLevelEditor() {
    newMap->remove();
    loadMap->remove();
    exit->remove();
}

void MenuLevelEditor::visibilityButtons(bool status) {
    background->setVisible(status);
    newMap->setVisible(status);
    loadMap->setVisible(status);
    exit->setVisible(status);
}


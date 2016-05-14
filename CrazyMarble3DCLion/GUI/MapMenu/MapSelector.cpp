//
// Created by mathieu on 14/05/16.
//

#include "MapSelector.h"

MapSelector::MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent) :
        GUIBase(device, keyEvent) {

    background = gui->addImage(driver->getTexture("data/GUI/Menu/BGCM2.png"), position2d<int>(0, 0));
    title = gui->addImage(driver->getTexture("data/GUI/Menu/MapSelector/MapList.png"), position2d<int>(650, 150));
    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Go back");
}

path MapSelector::mapSelector() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)) {
                return "";
            }

            for (int i = 0; i < myMapList.size(); ++i) {
                if (myMapList[i].checkPressed()) {
                    return myMapList[i].getMap();
                }
            }
        }
    }

    return "data/Maps/map.irr";
}

MapSelector::~MapSelector() {
    myMapList.clear();
    title->remove();
    background->remove();
    exit->remove();
}
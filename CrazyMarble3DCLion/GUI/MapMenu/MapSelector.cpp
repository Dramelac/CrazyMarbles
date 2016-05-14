//
// Created by mathieu on 14/05/16.
//

#include "MapSelector.h"

MapSelector::MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent) :
        GUIBase(device, keyEvent) {

    background = gui->addImage(driver->getTexture("data/GUI/Menu/BGCM2.png"), position2d<int>(0, 0));

    title = gui->addImage(driver->getTexture("data/GUI/Menu/MapSelector/MapList.png"), position2d<int>(650, 150));
}

path MapSelector::mapSelector() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (keyEvent->IsKeyDown(KEY_ESCAPE, true)) {
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
    title->remove();
    background->remove();
}
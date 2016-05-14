//
// Created by mathieu on 14/05/16.
//

#include "MapSelector.h"

MapSelector::MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent) :
        GUIBase(device, keyEvent) {

    title = gui->addStaticText(L"Map list : ", rect<s32>(200,100,600,400));
}

path MapSelector::mapSelector() {
    return "data/Maps/map.irr";
}

//
// Created by mathieu on 15/05/16.
//

#include "MapButton.h"

MapButton::MapButton(const path &map, u16 nPos, IGUIEnvironment* gui) : map(map) {
    vector2d<s32> pos((nPos%5)*350+150, (nPos/5)*200+250);
    dimension2d<s32> size(250,100);
    myButton = gui->addButton(rect<s32>(pos, size),0,-1,L"cc");
}

bool MapButton::checkPressed() {
    return myButton->isPressed();
}


const path &MapButton::getMap() const {
    return map;
}

MapButton::~MapButton() {
    myButton->remove();
}

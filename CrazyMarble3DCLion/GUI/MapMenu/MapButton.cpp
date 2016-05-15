//
// Created by mathieu on 15/05/16.
//

#include "MapButton.h"

MapButton::MapButton(const path &map, u16 nPos, IGUIEnvironment* gui) : map(map) {
    // calcul button position
    vector2d<s32> pos((nPos%5)*300+200, (nPos/5)*150+250);
    dimension2d<s32> size(250,100);

    // get filename
    stringw fileName = map.subString((u32)map.findLastChar("/") + 1, map.size());
    fileName = fileName.subString(0, fileName.size()-4);

    // create button
    myButton = gui->addButton(rect<s32>(pos, size), 0, -1, fileName.c_str());
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

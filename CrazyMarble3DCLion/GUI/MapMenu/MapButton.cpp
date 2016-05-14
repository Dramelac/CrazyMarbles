//
// Created by mathieu on 15/05/16.
//

#include "MapButton.h"

MapButton::MapButton(const path &map, IGUIEnvironment* gui) : map(map) {
    myButton = gui->addButton(rect<s32>(),0,-1,L"cc");
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
//
// Created by mathieu on 15/05/16.
//

#include "MapButton.h"

MapButton::MapButton(const path &map, u16 nPos, IGUIEnvironment* gui, IVideoDriver* driver) : map(map) {
    // calcul button position
    vector2d<s32> pos((nPos%5)*300+200, (nPos/5)*150+250);
    dimension2d<s32> size(250,100);

    // get filename
    stringw fileName = map.subString((u32)map.findLastChar("/") + 1, map.size());
    fileName = fileName.subString(0, fileName.size()-4);

    // create button
    myButton = gui->addButton(rect<s32>(pos, size), 0, -1, fileName.c_str());
    myButton->setImage(driver->getTexture("data/GUI/LevelEditor/editeur_bouton_map.png"));
    myButton->setScaleImage(true);
    myButton->setDrawBorder(false);
    myButton->setUseAlphaChannel(true);
}


MapButton::MapButton(const path &map, IGUIEnvironment *gui, vector2d<s32> pos, dimension2d<s32> size, IVideoDriver* driver) {
    // get filename
    stringw fileName = map.subString((u32)map.findLastChar("/") + 1, map.size());
    fileName = fileName.subString(0, fileName.size()-4);

    // create button
    myButton = gui->addButton(rect<s32>(pos, size), 0, -1, fileName.c_str());
    myButton->setImage(driver->getTexture("data/GUI/LevelEditor/editeur_bouton_map.png"));
    myButton->setScaleImage(true);
    myButton->setDrawBorder(false);
    myButton->setUseAlphaChannel(true);
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

void MapButton::setPos(rect<s32> pos) {
    myButton->setRelativePosition(pos);
}

void MapButton::setMapName(path map) {
    // get filename
    stringw fileName = map.subString((u32)map.findLastChar("/") + 1, map.size());
    fileName = fileName.subString(0, fileName.size()-4);
    myButton->setText(fileName.c_str());
}


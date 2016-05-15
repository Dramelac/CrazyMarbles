//
// Created by mathieu on 15/05/16.
//

#include "LvlEditorMapButton.h"

LvlEditorMapButton::LvlEditorMapButton(IGUIEnvironment* gui, IVideoDriver* driver, const path &map, u16 nPos) {

    mapButton = new MapButton(map, gui,
                              vector2d<s32>(nPos*100+500, 15),
                              dimension2d<s32>(100,50));

    removeButton = gui->addButton(rect<s32>(vector2d<s32>(nPos*100+575, 15),
                                            dimension2d<s32>(25,25)));
    removeButton->setImage(driver->getTexture("data/GUI/LevelEditor/Menu/remove.png"));

}

LvlEditorMapButton::~LvlEditorMapButton() {
    delete mapButton;
    removeButton->remove();
}

bool LvlEditorMapButton::checkRemove() {
    return removeButton->isPressed();
}

bool LvlEditorMapButton::checkChange() {
    return mapButton->checkPressed();
}

void LvlEditorMapButton::setupPos(u16 nPos) {

    removeButton->setRelativePosition(rect<s32>(vector2d<s32>(nPos*100+575, 15),
                                                dimension2d<s32>(25,25)));

    mapButton->setPos(rect<s32>(vector2d<s32>(nPos*100+500, 15),
                                dimension2d<s32>(100,50)));
}




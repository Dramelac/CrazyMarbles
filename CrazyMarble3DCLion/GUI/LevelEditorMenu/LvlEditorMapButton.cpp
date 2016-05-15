//
// Created by mathieu on 15/05/16.
//

#include "LvlEditorMapButton.h"

LvlEditorMapButton::LvlEditorMapButton(IGUIEnvironment* gui, IVideoDriver* driver, const path &map, u16 nPos): pos(nPos) {
    mapButton = new MapButton(map, gui,
                              vector2d<s32>(nPos*100+500, 0),
                              dimension2d<s32>(100,100));

    removeButton = gui->addButton(rect<s32>(vector2d<s32>(nPos*100+575, 0),
                                            dimension2d<s32>(25,25)));
    removeButton->setImage(driver->getTexture("data/GUI/LevelEditor/Menu/remove.png"));

}

LvlEditorMapButton::~LvlEditorMapButton() {
    delete mapButton;
    removeButton->remove();
}

void LvlEditorMapButton::checkEvent() {
    if (removeButton->isPressed()){
        // TODO remove map
        // WARNING REFRESH BUTTON ORDER
    }
    if (mapButton->checkPressed()){
        // TODO change map
    }
}


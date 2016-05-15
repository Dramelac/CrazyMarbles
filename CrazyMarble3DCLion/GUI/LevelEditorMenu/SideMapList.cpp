//
// Created by mathieu on 15/05/16.
//

#include "SideMapList.h"

SideMapList::SideMapList(IGUIEnvironment* gui, IVideoDriver* driver) {
    title = gui->addImage(driver->getTexture("data/GUI/LevelEditor/Menu/Campaign.png"), position2d<int>(250, 0));
    array<path> pathList = campaign.getMapCycle();

    for (u16 i = 0; i < pathList.size(); ++i) {
        listButton.push_back(new LvlEditorMapButton(gui, driver, pathList[i], i));
    }

}

void SideMapList::checkEvent() {
    for (int i = 0; i < listButton.size(); ++i) {
        listButton[i]->checkEvent();
    }
}

SideMapList::~SideMapList() {
    title->remove();
    for (int i = 0; i < listButton.size(); ++i) {
        delete listButton[i];
    }
    listButton.clear();
}
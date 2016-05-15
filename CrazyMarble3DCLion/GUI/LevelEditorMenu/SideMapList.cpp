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

SideMapList::~SideMapList() {
    campaign.save();
    title->remove();
    for (int i = 0; i < listButton.size(); ++i) {
        delete listButton[i];
    }
    listButton.clear();
}

void SideMapList::checkEvent() {
    for (u16 i = 0; i < listButton.size(); ++i) {
        if (listButton[i]->checkChange()){
            // TODO change map
        }
        else if (listButton[i]->checkRemove()){
            campaign.removeMapAt(i);
            delete listButton[i];
            listButton.erase(i);
            setupAllPlace();
        }
    }
}

void SideMapList::setupAllPlace() {
    for (u16 i = 0; i < listButton.size(); ++i) {
        listButton[i]->setupPos(i);
    }
}


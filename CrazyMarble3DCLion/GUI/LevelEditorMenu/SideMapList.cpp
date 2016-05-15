//
// Created by mathieu on 15/05/16.
//

#include "SideMapList.h"

SideMapList::SideMapList(IGUIEnvironment* gui, IVideoDriver* driver) {
    title = gui->addImage(driver->getTexture("data/GUI/LevelEditor/Menu/Campaign.png"), position2d<int>(250, 50));
    array<path> pathList = campaign.getMapCycle();

    for (int i = 0; i < pathList.size(); ++i) {
        listButton.push_back(new LvlEditorMapButton);
    }

}

void SideMapList::checkEvent() {

}

SideMapList::~SideMapList() {
    title->remove();
}
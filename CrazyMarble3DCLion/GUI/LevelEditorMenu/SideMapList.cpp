//
// Created by mathieu on 15/05/16.
//

#include "SideMapList.h"
#include "../MapMenu/MapSelector.h"

SideMapList::SideMapList(IrrlichtDevice* device, KeyboardEvent* keyEvent)
        : GUIBase(device, keyEvent) {

    title = gui->addImage(driver->getTexture("data/GUI/LevelEditor/editeur_Campaign.png"), position2d<int>(250, 20));
    array<path> pathList = campaign.getMapCycle();

    u16 i =0;
    for (i = 0; i < pathList.size(); ++i) {
        listButton.push_back(new LvlEditorMapButton(gui, driver, pathList[i], i));
    }

    addMapButton = gui->addButton(rect<s32>(vector2d<s32>(i*100+500,15), dimension2d<s32>(100,50)));
    addMapButton->setImage(driver->getTexture("data/GUI/LevelEditor/Menu/plus.png"));
    addMapButton->setUseAlphaChannel(true);
    addMapButton->setDrawBorder(false);

    if (i >= 10){
        addMapButton->setVisible(false);
    }

    saving = gui->addButton(rect<s32>(vector2d<s32>(1500,15), dimension2d<s32>(300,50)),0,-1,L"");
    saving->setImage(driver->getTexture("data/GUI/LevelEditor/editeur_bouton_save_Campaign.png"));
    saving->setDrawBorder(false);
    saving->setUseAlphaChannel(true);
}

SideMapList::~SideMapList() {
    title->remove();
    saving->remove();
    addMapButton->remove();
    for (int i = 0; i < listButton.size(); ++i) {
        delete listButton[i];
    }
    listButton.clear();
}

void SideMapList::checkEvent() {
    for (u16 i = 0; i < listButton.size(); ++i) {
        if (listButton[i]->checkChange()){
            changeMap(i);
        }
        else if (listButton[i]->checkRemove()){
            campaign.removeMapAt(i);
            delete listButton[i];
            listButton.erase(i);
            setupAllPlace();
        }
    }

    if (saving->isPressed()){
        campaign.save();
    } else if (addMapButton->isPressed()){
        addMap();
    }
}

void SideMapList::setupAllPlace() {
    u16 i= 0;
    for (i = 0; i < listButton.size(); ++i) {
        listButton[i]->setupPos(i);
    }

    addMapButton->setRelativePosition(rect<s32>(vector2d<s32>(i*100+500,15), dimension2d<s32>(100,50)));
    addMapButton->setVisible(i < 10);
}

void SideMapList::addMap() {
    path map = getSelectMap();
    if (map == "") return;

    campaign.setMapCycle(map);
    listButton.push_back(new LvlEditorMapButton(gui, driver, map, 0));
    setupAllPlace();
}

path SideMapList::getSelectMap() {
    MapSelector selector(device, keyEvent);
    return selector.mapSelector();
}

void SideMapList::changeMap(u16 pos) {
    path map = getSelectMap();
    if (map == "") return;

    campaign.setMapCycle(pos, map);
    listButton[pos]->setMapName(map);
}






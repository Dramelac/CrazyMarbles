//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3D_SIDEMAPLIST_H
#define CRAZYMARBLE3D_SIDEMAPLIST_H

#include "../GUIBase.h"
#include "../../General/Campaign.h"
#include "LvlEditorMapButton.h"

using namespace irr;
using namespace gui;
using namespace core;

class SideMapList : public GUIBase {
private:
    Campaign campaign;
    IGUIImage* title;
    IGUIButton* addMapButton;
    IGUIButton* saving;

    array<LvlEditorMapButton*> listButton;

    void setupAllPlace();
    path getSelectMap();
    void addMap();
    void changeMap(u16 pos);

public:
    SideMapList(IrrlichtDevice* device, KeyboardEvent* keyEvent);
    virtual ~SideMapList();

    void checkEvent();
};


#endif //CRAZYMARBLE3D_SIDEMAPLIST_H

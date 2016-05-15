//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_SIDEMAPLIST_H
#define CRAZYMARBLE3DCLION_SIDEMAPLIST_H

#include <irrlicht.h>
#include "../../General/Campaign.h"
#include "LvlEditorMapButton.h"
#include "../GUIBase.h"

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
    void addMap();

public:
    SideMapList(IrrlichtDevice* device, KeyboardEvent* keyEvent);
    virtual ~SideMapList();

    void checkEvent();
};


#endif //CRAZYMARBLE3DCLION_SIDEMAPLIST_H

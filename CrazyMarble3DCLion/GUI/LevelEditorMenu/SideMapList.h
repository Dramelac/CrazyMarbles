//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_SIDEMAPLIST_H
#define CRAZYMARBLE3DCLION_SIDEMAPLIST_H

#include <irrlicht.h>
#include "../../General/Campaign.h"
#include "LvlEditorMapButton.h"

using namespace irr;
using namespace gui;
using namespace core;

class SideMapList {
private:
    Campaign campaign;
    IGUIImage* title;

    array<LvlEditorMapButton*> listButton;

    void setupAllPlace();

public:
    SideMapList(IGUIEnvironment* gui, IVideoDriver* driver);
    virtual ~SideMapList();

    void checkEvent();
};


#endif //CRAZYMARBLE3DCLION_SIDEMAPLIST_H

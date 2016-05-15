//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_SIDEMAPLIST_H
#define CRAZYMARBLE3DCLION_SIDEMAPLIST_H

#include <irrlicht.h>
#include "../../General/Campaign.h"

using namespace irr;
using namespace gui;
using namespace core;

class SideMapList {
private:
    Campaign campaign;

public:
    SideMapList(IGUIEnvironment* gui);
    void checkEvent();
};


#endif //CRAZYMARBLE3DCLION_SIDEMAPLIST_H

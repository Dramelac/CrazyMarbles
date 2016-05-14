//
// Created by mathieu on 09/05/16.
//

#ifndef CRAZYMARBLE3DCLION_CAMPAIGN_H
#define CRAZYMARBLE3DCLION_CAMPAIGN_H

#include <irrlicht.h>
#include "../Utils/KeyboardEvent.h"

using namespace irr;
using namespace io;
using namespace core;
using namespace video;

class Campaign {

private:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    KeyboardEvent* keyEvent;

    array<path> mapCycle;

public:
    Campaign(IrrlichtDevice* device, KeyboardEvent* keyEvent);

    void play();
};


#endif //CRAZYMARBLE3DCLION_CAMPAIGN_H

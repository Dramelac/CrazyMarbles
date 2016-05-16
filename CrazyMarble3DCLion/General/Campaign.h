//
// Created by mathieu on 09/05/16.
//

#ifndef CRAZYMARBLE3DCLION_CAMPAIGN_H
#define CRAZYMARBLE3DCLION_CAMPAIGN_H

#include <irrlicht.h>
#include "../Utils/KeyboardEvent.h"
#include "Game.h"

#include <iostream>
#include <fstream>

using namespace std;

using namespace irr;
using namespace io;
using namespace core;
using namespace video;

class Campaign {

private:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    KeyboardEvent* keyEvent;
    bool playable;
    stringc pseudo;

    array<path> mapCycle;
    void load();
    bool checkValidity(path map);

public:
    Campaign(IrrlichtDevice* device, KeyboardEvent* keyEvent, stringc pseudo);
    Campaign(IrrlichtDevice* device, KeyboardEvent* keyEvent, stringc pseudo, path map);
    Campaign();

    s32 play();

    const array<path> & getMapCycle() const;
    void setMapCycle(u16 placeNumber, path map);
    void setMapCycle(path map);
    void removeMapAt(u16 placeNumber);

    void save();
};


#endif //CRAZYMARBLE3DCLION_CAMPAIGN_H

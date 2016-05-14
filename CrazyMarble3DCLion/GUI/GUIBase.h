//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3DCLION_GUIBASE_H
#define CRAZYMARBLE3DCLION_GUIBASE_H

#include <irrlicht.h>
#include "../Utils/KeyboardEvent.h"

using namespace irr;
using namespace video;
using namespace gui;

class GUIBase {
protected:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    IGUIEnvironment* gui;

    KeyboardEvent *keyEvent;
public:
    GUIBase(IrrlichtDevice *device, KeyboardEvent *keyEvent);
};


#endif //CRAZYMARBLE3DCLION_GUIBASE_H

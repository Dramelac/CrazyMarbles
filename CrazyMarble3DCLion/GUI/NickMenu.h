//
// Created by antoine on 04/05/16.
//

#ifndef CRAZYMARBLE3DCLION_NICKMENU_H
#define CRAZYMARBLE3DCLION_NICKMENU_H

#include <irrlicht.h>
#include "../Utils/KeyboardEvent.h"

using namespace irr;
using namespace video;
using namespace core;
using namespace gui;


class NickMenu {
private:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    IGUIEnvironment* gui;

    IGUIEditBox* editBox;
    IGUIFont* font;

    stringc* nickname;

    KeyboardEvent* keyEvent;

    IGUIImage* welcome;
    IGUIImage* enterNick;
    IGUIButton* valide;
    IGUIButton* exit;

public:
    NickMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    void loop();
};


#endif //CRAZYMARBLE3DCLION_NICKMENU_H

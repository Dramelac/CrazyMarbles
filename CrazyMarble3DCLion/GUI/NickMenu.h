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

    IGUIImage* crazyMarble;
    IGUIImage* enterNick;
    IGUIButton* valide;
    IGUIButton* exit;

    void visibilityButtons(bool status);

public:
    NickMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    virtual ~NickMenu();

    const wchar_t* loop();
};


#endif //CRAZYMARBLE3DCLION_NICKMENU_H

//
// Created by antoine on 04/05/16.
//

#ifndef CRAZYMARBLE3DCLION_NICKMENU_H
#define CRAZYMARBLE3DCLION_NICKMENU_H


#include "../Utils/KeyboardEvent.h"
#include "GUIBase.h"

using namespace irr;
using namespace video;
using namespace core;
using namespace gui;


class NickMenu : public GUIBase{
private:

    IGUIEditBox* editBox;
    IGUIFont* font;

    stringc* nickname;

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

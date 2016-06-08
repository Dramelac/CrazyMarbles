//
// Created by antoine on 04/05/16.
//

#ifndef CRAZYMARBLE3D_NICKMENU_H
#define CRAZYMARBLE3D_NICKMENU_H


#include "../Utils/KeyboardEvent.h"
#include "GUIBase.h"

using namespace core;


class NickMenu : public GUIBase{
private:

    IGUIEditBox* editBox;
    IGUIFont* font;

    IGUIImage* crazyMarble;
    IGUIImage* enterNick;
    IGUIButton* valide;
    IGUIButton* exit;

public:
    NickMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    virtual ~NickMenu();

    const wchar_t* loop();
};


#endif //CRAZYMARBLE3D_NICKMENU_H

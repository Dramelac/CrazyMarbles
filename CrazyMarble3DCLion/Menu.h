//
// Created by mathieu on 26/04/16.
//

#ifndef CRAZYMARBLE3DCLION_MENU_HPP
#define CRAZYMARBLE3DCLION_MENU_HPP

#include <irrlicht.h>
#include "Utils/KeyboardEvent.h"

using namespace irr;
using namespace video;
using namespace core;
using namespace gui;

class Menu {
private:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    IGUIEnvironment* gui;


    KeyboardEvent* keyEvent;

    IGUIButton* exit;
    IGUIButton* game;

public:

    Menu(IrrlichtDevice *inDevice, KeyboardEvent *keyEvent);
    void loop();
};


#endif //CRAZYMARBLE3DCLION_MENU_HPP

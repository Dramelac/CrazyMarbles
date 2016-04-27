//
// Created by mathieu on 26/04/16.
//

#ifndef CRAZYMARBLE3DCLION_MENU_HPP
#define CRAZYMARBLE3DCLION_MENU_HPP

#include <irrlicht.h>

using namespace irr;
using namespace gui;

class Menu {
private:
    IrrlichtDevice* device;
    IGUIEnvironment* gui;

public:

    Menu(IrrlichtDevice* inDevice);
    void loop();
};


#endif //CRAZYMARBLE3DCLION_MENU_HPP

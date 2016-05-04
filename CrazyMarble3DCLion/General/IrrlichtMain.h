//
// Created by mathieu on 27/04/16.
//

#ifndef CRAZYMARBLE3DCLION_IRRLICHTMAIN_HPP
#define CRAZYMARBLE3DCLION_IRRLICHTMAIN_HPP

#include <irrlicht.h>

#include "../Utils/KeyboardEvent.h"
#include "Menu.h"

using namespace irr;

class IrrlichtMain {

private:
    IrrlichtDevice* device;

    const unsigned int width;
    const unsigned int height;

    KeyboardEvent keyEvent;

public:
    IrrlichtMain();

    void main();
};


#endif //CRAZYMARBLE3DCLION_IRRLICHTMAIN_HPP

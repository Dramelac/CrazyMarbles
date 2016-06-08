//
// Created by mathieu on 27/04/16.
//

#ifndef CRAZYMARBLE3D_IRRLICHTMAIN_HPP
#define CRAZYMARBLE3D_IRRLICHTMAIN_HPP

#include "../Utils/KeyboardEvent.h"
#include "../Utils/TextureLoader.h"
#include "../GUI/Menu.h"

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


#endif //CRAZYMARBLE3D_IRRLICHTMAIN_HPP

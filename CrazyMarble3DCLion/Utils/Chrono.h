//
// Created by romain on 01/05/16.
//

#ifndef CRAZYMARBLE3D_CHRONO_H
#define CRAZYMARBLE3D_CHRONO_H
#include <irrlicht.h>
#include <string.h>

using namespace irr;
using namespace gui;
using namespace core;
using namespace video;

class Chrono {
private:
    u32 chrono;
    ITimer* timer;
    IGUIStaticText* displayChrono;
    IGUIImage* backTimer;
public:
    Chrono(IrrlichtDevice* inDevice, u32 chrono, IVideoDriver *driver);
    virtual ~Chrono();

    u32 getTime();
    void start();
    void stop();


};


#endif //CRAZYMARBLE3D_CHRONO_H

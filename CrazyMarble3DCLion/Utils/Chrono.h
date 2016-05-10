//
// Created by romain on 01/05/16.
//

#ifndef CRAZYMARBLE3DCLION_CHRONO_H
#define CRAZYMARBLE3DCLION_CHRONO_H
#include <irrlicht.h>

using namespace irr;

class Chrono {
private:
    u32 chrono;
    ITimer* timer;
public:

    Chrono(IrrlichtDevice* inDevice, u32 chrono);
    virtual ~Chrono();

//void setTime (int chrono);
    u32 getTime();
    void restart();
    void start();
    void stop();


};


#endif //CRAZYMARBLE3DCLION_CHRONO_H

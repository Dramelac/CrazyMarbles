//
// Created by romain on 01/05/16.
//

#ifndef CRAZYMARBLE3DCLION_CHRONO_H
#define CRAZYMARBLE3DCLION_CHRONO_H
#include <irrlicht.h>

using namespace irr;

class Chrono : public ITimer{
private:
    s32 chrono;
public:

    Chrono(s32 chrono);
    virtual void setTime (int chrono);
    virtual void getTime (int chrono);
    virtual void start ();
    virtual void stop ();


};


#endif //CRAZYMARBLE3DCLION_CHRONO_H

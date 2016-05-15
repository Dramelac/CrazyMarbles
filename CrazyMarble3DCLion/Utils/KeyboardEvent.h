//
// Created by romain on 26/04/16.
//

#ifndef CRAZYMARBLE3DCLION_KEYBOARDEVENT_H
#define CRAZYMARBLE3DCLION_KEYBOARDEVENT_H

#include <irrlicht.h>

using namespace irr;

class KeyboardEvent : public IEventReceiver{

private:
    IrrlichtDevice* device;
    bool keyPressedDown[KEY_KEY_CODES_COUNT];

public :

    virtual bool OnEvent(const SEvent& event);
    virtual bool IsKeyDown(EKEY_CODE keyCode, bool loop=false);
    KeyboardEvent();


    void setDevice(IrrlichtDevice *device);
};


#endif //CRAZYMARBLE3DCLION_KEYBOARDEVENT_H

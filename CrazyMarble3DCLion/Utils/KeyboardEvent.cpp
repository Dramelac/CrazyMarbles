//
// Created by romain on 26/04/16.
//

#include <iostream>
#include "KeyboardEvent.h"

// Construct
KeyboardEvent::KeyboardEvent() {
    for(int i = 0; i < KEY_KEY_CODES_COUNT; ++i){
        keyPressedDown[i] = false;
    }
}

// Keyboard Listener
bool KeyboardEvent::OnEvent(const SEvent &event)
{
    if(event.EventType == EET_KEY_INPUT_EVENT){
        keyPressedDown[event.KeyInput.Key] = event.KeyInput.PressedDown;
    }
    else if (event.EventType == EET_GUI_EVENT){
        if (event.GUIEvent.EventType == EGET_BUTTON_CLICKED){
            switch (event.GUIEvent.Caller->getID()){
                case 101:
                    //std::cout << "closing " << std::endl;
                    //device->closeDevice();
                    return true;
                default:
                    return false;
            }
        }
    }


    return false;
}

// Keyboard checker
bool KeyboardEvent::IsKeyDown(EKEY_CODE keyCode) const  {
    return keyPressedDown[keyCode];
}

void KeyboardEvent::setDevice(IrrlichtDevice *device) {
    KeyboardEvent::device = device;
}
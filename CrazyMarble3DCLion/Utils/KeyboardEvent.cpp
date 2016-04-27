//
// Created by romain on 26/04/16.
//

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
    return false;
}

// Keyboard checker
bool KeyboardEvent::IsKeyDown(EKEY_CODE keyCode) const  {
    return keyPressedDown[keyCode];
}
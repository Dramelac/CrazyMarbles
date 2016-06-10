//
// Created by antoine on 19/05/16.
//

#include "SoundManager.h"
#include <iostream>
#include <irrKlang.h>

int loop(int argc, const char** argv) {
    ISoundEngine* engine = createIrrKlangDevice();

    if (!engine)
        return 0; // error starting up the engine

    // play some sound stream, looped
    engine->play2D("somefile.mp3", true);

    char i = 0;
    std::cin >> i; // wait for user to press some key

    engine->drop(); // delete engine
    return 0;
}


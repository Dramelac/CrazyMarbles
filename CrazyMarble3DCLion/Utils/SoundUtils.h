#ifndef CRAZYMARBLE3D_SOUNDUTILS_H
#define CRAZYMARBLE3D_SOUNDUTILS_H

#include <irrKlang.h>
#include <iostream>

using namespace irrklang;

class SoundUtils
{

private:
    static bool statusSound;
    static ISoundEngine* engine;
    static bool noise;


public:
    static void play();
    static void getDamage();
    static void muteSoundBack();
    static void muteNoise();
    static void winSound();
    static void looseSound();
    static void fallSound();
    static void timerSound();

    static bool isStatusSound();
    static bool isNoise();
};

#endif //CRAZYMARBLE3D_SOUNDUTILS_H
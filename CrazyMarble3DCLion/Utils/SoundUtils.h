#ifndef CRAZYMARBLE3D_SOUNDUTILS_H
#define CRAZYMARBLE3D_SOUNDUTILS_H

#include <irrKlang.h>


using namespace irrklang;

class SoundUtils
{

private:
    static ISoundEngine* engine;
    static ISoundEngine* engine1;

public:
    static void play();
    static void getDamage();
    static void mute();
};

#endif //CRAZYMARBLE3D_SOUNDUTILS_H
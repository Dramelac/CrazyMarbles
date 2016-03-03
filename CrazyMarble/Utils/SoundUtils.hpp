//
// Created by antoine on 03/03/16.
//

#ifndef CRAZYMARBLE_SOUND_H
#define CRAZYMARBLE_SOUND_H
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <iostream>

using namespace sf;

class SoundUtils {

private:
    static Music music;

public:
    static void InitSong();
    static void MuteSong();
    static void UnMute();
    static void UpSong();
    static void DownSong();

};


#endif //CRAZYMARBLE_SOUND_H
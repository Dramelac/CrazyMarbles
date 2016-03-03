//
// Created by antoine on 03/03/16.
//

#include "SoundUtils.hpp"


Music SoundUtils::music;

void SoundUtils::InitSong(){
    if(!music.openFromFile("data/test.wav")){
        std::cout << "Error file not found" << std::endl;
    }
    music.play();
    music.setVolume(50);
    music.setLoop(true);
}

void SoundUtils::UnMute() {
    if (music.getStatus() == music.Paused) music.play();
}

void SoundUtils::MuteSong() {
    music.pause();
}

void SoundUtils::UpSong() {

    float y = music.getVolume()+1;
    if(y>100) y = 100;
    music.setVolume(y);
}

void SoundUtils::DownSong() {
    float y = music.getVolume()-1;
    if(y<0) y = 0;
    music.setVolume(y);

}
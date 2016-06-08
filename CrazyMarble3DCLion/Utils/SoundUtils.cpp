#include <iostream>
#include "SoundUtils.h"


ISoundEngine* SoundUtils::engine = createIrrKlangDevice();


void SoundUtils::play() {
    if (!engine){
        std::cout << "fail engine loading" << std::endl;
        return;
    }
    std::cout << "sound" << std::endl;
    engine->play2D("data/Sound/makeourstory.wav");

    return;
}

void SoundUtils::mute() {
    engine->setAllSoundsPaused();
}

void SoundUtils::getDamage() {

}






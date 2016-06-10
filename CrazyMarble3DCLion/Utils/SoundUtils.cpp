
#include "SoundUtils.h"


ISoundEngine* SoundUtils::engine = createIrrKlangDevice();

bool SoundUtils::statusSound = false;
bool SoundUtils::noise = true;


void SoundUtils::play() {
    if (!engine){
        std::cout << "fail engine loading" << std::endl;
        return;
    }
    engine->play2D("data/Sound/makeourstory.wav");

}

void SoundUtils::muteSoundBack() {
    if(statusSound){
        engine->setAllSoundsPaused(false);
        statusSound = false;
    }else{
        engine->setAllSoundsPaused(true);
        statusSound = true;
    }
}


void SoundUtils::getDamage() {
    if(noise) {
        engine->play2D("data/Sound/pop.wav");
    }
}

void SoundUtils::muteNoise() {
    noise = !noise;
}

void SoundUtils::winSound() {
    if(noise) {
        engine->play2D("data/Sound/win.wav");
    }
}


void SoundUtils::looseSound() {
    if(noise) {
        engine->play2D("data/Sound/loose.wav");
    }
}

void SoundUtils::timerSound() {
    if(noise) {
        engine->play2D("data/Sound/timer.wav");
    }
}

void SoundUtils::fallSound() {
    if(noise) {
        engine->play2D("data/Sound/fall.wav");
    }
}


bool SoundUtils::isStatusSound() {
    return statusSound;
}

bool SoundUtils::isNoise() {
    return noise;
}
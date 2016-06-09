
#include "SoundUtils.h"


ISoundEngine* SoundUtils::engine = createIrrKlangDevice();

bool SoundUtils::statusSound = false;
ik_f32 SoundUtils::vol = 50;
bool SoundUtils::noise = true;


void SoundUtils::play() {
    if (!engine){
        std::cout << "fail engine loading" << std::endl;
        return;
    }
    std::cout << "sound" << std::endl;
    engine->play2D("data/Sound/makeourstory.wav");

    return;
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
    engine->play2D("data/Sound/pop.wav");
}


void SoundUtils::looseSound() {
    engine->play2D("data/Sound/pop.wav");

}

void SoundUtils::timerSound() {
    engine->play2D("data/Sound/pop.wav");
}

void SoundUtils::fallSound() {
    engine->play2D("data/Sound/pop.wav");
}
















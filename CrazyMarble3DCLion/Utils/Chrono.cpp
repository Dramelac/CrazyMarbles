//
// Created by romain on 01/05/16.
//


#include "Chrono.h"

Chrono::Chrono(IrrlichtDevice* inDevice, u32 chrono=60) {
    this->chrono=chrono * 1000;
    timer = inDevice->getTimer();
}

u32 Chrono::getTime() {
    if (timer->isStopped()){
        return 0;
    }
    s32 temp = (chrono - timer->getTime())/1000;
    if (temp <= 0){
        stop();
        return 0;
    } else {
        return (u32)temp;
    }
}

void Chrono::start() {
    if (timer->isStopped()) {
        timer->start();
    }
}

void Chrono::stop() {
    if (not timer->isStopped()) {
        timer->stop();
    }
}

void Chrono::restart() {
    timer->setTime(0);
    timer->setSpeed(1);
    start();
}


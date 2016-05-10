//
// Created by romain on 01/05/16.
//

#include <iostream>
#include "Chrono.h"

Chrono::Chrono(IrrlichtDevice* inDevice, u32 chrono=60) {
    this->chrono=chrono;
    timer = inDevice->getTimer();
    timer->setTime(this->chrono);

    //timer->setSpeed(1);
    // std::cout << timer->getSpeed() << std::endl;
}

u32 Chrono::getTime() {
    std::cout << timer->getTime() << std::endl;
    return timer->getTime();
}

void Chrono::start() {
    std::cout << "start" << std::endl;
    timer->start();
}

void Chrono::stop() {
    std::cout << "stop" << std::endl;
    timer->stop();
}


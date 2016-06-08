//
// Created by romain on 01/05/16.
//


#include "Chrono.h"

Chrono::Chrono(IrrlichtDevice* inDevice, u32 chrono=60, IVideoDriver* driver) {
    this->chrono=chrono * 1000;
    timer = inDevice->getTimer();
    timer->setTime(0);
    timer->setSpeed(1);
    displayChrono = inDevice->getGUIEnvironment()->addStaticText(L"60",rect<s32>(885,20,935,80));
    backTimer->setImage(driver->getTexture("data/GUI/Menu/play/timer.png"));
}

Chrono::~Chrono() {
    stop();
    timer->setTime(0);
    timer->setSpeed(1);
    displayChrono->remove();
}

u32 Chrono::getTime() {
    if (timer->isStopped()){
        return 0;
    }
    s32 temp = ((s32)chrono - (s32)timer->getTime())/1000;
    if (temp < 0){
        temp = 0;
    }
    stringw text;
    text += temp;
    displayChrono->setText(text.c_str());

    return (u32)temp;
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



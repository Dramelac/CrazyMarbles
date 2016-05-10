//
// Created by romain on 01/05/16.
//

#include "Chrono.h"

Chrono::Chrono(u32 chrono=60) {
    this->chrono=chrono;
    this->setTime(chrono);
    this->getTime();
    this->start();
}
/*
void Chrono::setTime(int chrono) {

}
void Chrono::getTime(int chrono) {

}

void Chrono::start() {

}

void Chrono::stop() {

}*/
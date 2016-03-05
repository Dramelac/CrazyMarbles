//
// Created by mathieu on 03/03/16.
//

#include "Position.hpp"

Position::Position(int CordX, int CordY, int CordZ) : CordX(CordX), CordY(CordY), CordZ(CordZ) { }

Position::Position() : CordX(0), CordY(0), CordZ(0) { }

Position::Position(int CordX, int CordY) : CordX(CordX), CordY(CordY), CordZ(0) { }

void Position::Move(const Position *position) {
    CordX += position->CordX;
    if(CordX < 0) CordX = 0;
    CordY += position->CordY;
    if(CordY < 0) CordY = 0;
    CordZ += position->CordZ;
}

sf::Vector2f Position::getVector() {
    return sf::Vector2f(CordX, CordY);
}

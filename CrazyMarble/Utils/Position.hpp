//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_POSITION_HPP
#define CRAZYMARBLE_POSITION_HPP

#include <SFML/Graphics.hpp>

class Position {
private:
    int CordX;
    int CordY;
    int CordZ;

public:
    Position(int CordX, int CordY, int CordZ);
    Position(int CordX, int CordY);
    Position();

    void Move(const Position *position);
    sf::Vector2f getVector();

};


#endif //CRAZYMARBLE_POSITION_HPP

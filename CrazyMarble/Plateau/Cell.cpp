//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Cell.hpp"

Cell::Cell() : value(0), quad(Quads, 4), quadWallRight(Quads, 4), quadWallLeft(Quads, 4) {

    if(!tile.loadFromFile("data/tile.png")){
        std::cout << "Error loading file" << std::endl;
    }
    if(!tileWall.loadFromFile("data/wall.png")){
        std::cout << "Error loading file" << std::endl;
    }

    unsigned int width = tile.getSize().x;
    unsigned int height = tile.getSize().y;

    quad[0].texCoords = sf::Vector2f(0, 0);
    quad[1].texCoords = sf::Vector2f(width, 0);
    quad[2].texCoords = sf::Vector2f(width, height);
    quad[3].texCoords = sf::Vector2f(0, height);
    quad.resize(width * height * 4);


    width = tileWall.getSize().x;
    height = tileWall.getSize().y;

    quadWallRight[0].texCoords = sf::Vector2f(0, 0);
    quadWallRight[1].texCoords = sf::Vector2f(width, 0);
    quadWallRight[2].texCoords = sf::Vector2f(width, height);
    quadWallRight[3].texCoords = sf::Vector2f(0, height);
    quadWallRight.resize(width * height * 4);

    quadWallLeft[0].texCoords = sf::Vector2f(0, 0);
    quadWallLeft[1].texCoords = sf::Vector2f(width, 0);
    quadWallLeft[2].texCoords = sf::Vector2f(width, height);
    quadWallLeft[3].texCoords = sf::Vector2f(0, height);
    quadWallLeft.resize(width * height * 4);


}

int Cell::getValue() const {
    return value;
}

void Cell::setValue(int value) {
    Cell::value = value;
}

const Texture &Cell::getTile() const {
    return tile;
}


void Cell::setupQuadPlace(int middle, int row, int column, int max) {
    unsigned int width = tile.getSize().x;
    unsigned int height = tile.getSize().y;

    int x = (middle/2 - (row * (width/2))) + column * (width/2) - width/2;
    int y =  row * (width/(2*2)) + column * (height/(2*2)) + 50;

    quad[0].position = sf::Vector2f(x+width/2, y);
    quad[1].position = sf::Vector2f(x+width, y+height/4);
    quad[2].position = sf::Vector2f(x+width/2, y+height/2);
    quad[3].position = sf::Vector2f(x, y+height/4);

    quadWallRight[0].position = sf::Vector2f(x+width/2, y+height/2);
    quadWallRight[1].position = sf::Vector2f(x+width, y+height/4);
    quadWallRight[2].position = sf::Vector2f(x+width, max-height/4);
    quadWallRight[3].position = sf::Vector2f(x+width/2, max);

    quadWallLeft[0].position = sf::Vector2f(x, y+height/4);
    quadWallLeft[1].position = sf::Vector2f(x+width/2, y+height/2);
    quadWallLeft[2].position = sf::Vector2f(x+width/2, max);
    quadWallLeft[3].position = sf::Vector2f(x, max-height/4);
}

void Cell::drawCel(RenderWindow *windows) {
    windows->draw(quad, &tile);

    windows->draw(quadWallLeft, &tileWall);
    windows->draw(quadWallRight, &tileWall);
}

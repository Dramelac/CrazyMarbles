//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_CELL_HPP
#define TESTISO_CELL_HPP
#include <SFML/Graphics.hpp>
using namespace sf;

class Cell {
private:
    int value;
    Texture tile;
    VertexArray quad;

public:
    Cell();

    int getValue() const;
    void setValue(int value);

    const Texture & getTile() const;
    void setupQuadPlace(int middle, int row, int column);
    void drawCel(RenderWindow *windows);
};


#endif //TESTISO_CELL_HPP

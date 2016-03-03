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
    VertexArray quad;
    VertexArray quadWallRight;
    VertexArray quadWallLeft;

public:
    Cell();

    void setupQuadPlace(int middle, int row, int column, int max);
    void drawCel(RenderWindow *windows);
};


#endif //TESTISO_CELL_HPP

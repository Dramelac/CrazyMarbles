//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_CELL_HPP
#define TESTISO_CELL_HPP

#include <SFML/Graphics.hpp>
using namespace sf;

class Cell {
private:
    int heightLevel;
    VertexArray quad;
    VertexArray quadWallRight;
    VertexArray quadWallLeft;

public:
    Cell();

    void setupQuadPlace(int middle, int row, int column);
    void drawCel(RenderWindow *windows);
};


#endif //TESTISO_CELL_HPP

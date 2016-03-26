//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_CELL_HPP
#define TESTISO_CELL_HPP

#ifdef __linux__
    #include "../Utils/Position.h"
#elif _WIN32
    #include "Position.h"
#else

#endif

//#include <SFML/Graphics.hpp>
//using namespace sf;

class Cell {
private:

public:
    Cell();

    void setupQuadPlace(int middle, int row, int column);
    //void drawCel(RenderWindow *windows);
};


#endif //TESTISO_CELL_HPP

//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_BOARD_HPP
#define TESTISO_BOARD_HPP


#include "Cell.hpp"

class Board {
private:
    Cell** board;
    int largeur;
    int hauteur;
public:


    Board(int hauteur, int largeur);
};


#endif //TESTISO_BOARD_HPP

//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_BOARD_HPP
#define TESTISO_BOARD_HPP


#include "Cell.hpp"

class Board {
private:
    Cell** board;
    const unsigned int midleBoard;
    int largeur;
    int hauteur;
public:
    Board(const unsigned int hauteur, const unsigned int largeur);
    ~Board();

    int getLargeur() const;
    int getHauteur() const;
    const unsigned int getMidleBoard() const;
};


#endif //TESTISO_BOARD_HPP

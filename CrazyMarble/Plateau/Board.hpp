//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_BOARD_HPP
#define TESTISO_BOARD_HPP


#include "Cell.hpp"
#include <SFML/Graphics.hpp>
using namespace sf;

class Board {
private:
    Cell** board;
    const unsigned int midleBoard;
    int largeur;
    int hauteur;

    void initCellPlace();
public:
    Board(const unsigned int hauteur, const unsigned int largeur);
    ~Board();

    int getLargeur() const;
    int getHauteur() const;
    const unsigned int getMidleBoard() const;
    void drawBoard(RenderWindow *windows);
};


#endif //TESTISO_BOARD_HPP

//
// Created by mathieu on 23/02/16.
//

#include "Board.hpp"

Board::Board(unsigned int hauteur, unsigned int largeur): hauteur(hauteur), largeur(largeur), midleBoard(largeur * 75){
    board = new Cell* [hauteur];
    for(int i=0; i<hauteur;i++){
        board[i] = new Cell[largeur];
    }
    initCellPlace();
}


void Board::initCellPlace() {
    for (int row = 0; row < largeur; row++)
    {
        for (int column = 0; column < hauteur; column++)
        {
            board[row][column].setupQuadPlace(midleBoard, row, column, 800);
        }
    }
}

int Board::getLargeur() const {
    return largeur;
}

int Board::getHauteur() const {
    return hauteur;
}

Board::~Board() {
    for (int i=0;i<hauteur;i++){
        delete[] board[i];
    }
    delete[] board;
}

const unsigned int Board::getMidleBoard() const {
    return midleBoard;
}


void Board::drawBoard(RenderWindow *windows) {

    for (int row = 0; row < largeur; row++)
    {
        for (int column = 0; column < hauteur; column++)
        {
            board[row][column].drawCel(windows);
        }
    }
}


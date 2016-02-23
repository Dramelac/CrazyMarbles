//
// Created by mathieu on 23/02/16.
//

#include "Board.hpp"

Board::Board(const int hauteur, const int largeur): hauteur(hauteur), largeur(largeur){
    board = new Cell* [hauteur];
    for(int i=0; i<hauteur;i++){
        board[i] = new Cell[largeur];
    }
}
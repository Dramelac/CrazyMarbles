//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include "Plateau/Board.hpp"
#include <SFML/Graphics.hpp>
using namespace sf;

class Game {
private:
    Board board;
    RenderWindow windows;
    View view;
    CircleShape circle;
    const unsigned int largeur;
    const unsigned int hauteur;
    int speed;

    Texture tile;
    Sprite spriteTile;

    void updateGameBoard();
    void eventChecker();
    void checkPos();
    void updateView();
public:
    Game(const unsigned int x, const unsigned int y);
    void gameLoop();
};


#endif //TESTISO_GAME_HPP

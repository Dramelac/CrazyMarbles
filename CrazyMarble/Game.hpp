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
    CircleShape circle;
    const unsigned int largeur;
    const unsigned int hauteur;
    int speed;

    Texture tile;
    Sprite spriteTile;
    bool debug;

    void updateGameBoard();
    void eventChecker();
    void checkPos();
public:
    Game(const int x, const int y);
    void gameLoop();
};


#endif //TESTISO_GAME_HPP

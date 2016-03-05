//
// Created by mathieu on 23/02/16.
//

#ifndef TESTISO_GAME_HPP
#define TESTISO_GAME_HPP


#include "Plateau/Board.hpp"
#include "Play/Player.hpp"
#include <SFML/Graphics.hpp>
using namespace sf;

class Game {
private:
    Board board;
    RenderWindow windows;
    View view;
    const unsigned int width;
    const unsigned int height;

    Player player;
    int speed;
    float zoom;

    void updateGameBoard();
    void eventChecker();
    void updateView();
public:
    Game(const unsigned int x, const unsigned int y);
    void gameLoop();
};


#endif //TESTISO_GAME_HPP

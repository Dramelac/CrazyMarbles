//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Game.hpp"

Game::Game(int x, int y):largeur(1000),hauteur(800),board(Board(largeur,hauteur)){
    windows.create(VideoMode(largeur,hauteur), "Crazy Marbles");
    windows.setPosition(Vector2i(50,50));
    windows.setFramerateLimit(30);

    rectTest.setFillColor(Color::Red);
    rectTest.setSize(Vector2f(50, 50));
    rectTest.setPosition(Vector2f(largeur/2-(rectTest.getSize().x/2),hauteur/2-(rectTest.getSize().y/2)));

    speed = 2;

}


void Game::updateGameBoard() {




    windows.draw(rectTest);
    windows.display();
    windows.clear();
}


void Game::eventChecker() {
    if(windows.hasFocus()){
        if(Keyboard::isKeyPressed(Keyboard::Up)){
            rectTest.move(0, -1*speed);
        }
        if(Keyboard::isKeyPressed(Keyboard::Down)){
            rectTest.move(0, 1*speed);
        }
        if(Keyboard::isKeyPressed(Keyboard::Right)){
            rectTest.move(1*speed, 0);
        }
        if(Keyboard::isKeyPressed(Keyboard::Left)){
            rectTest.move(-1*speed, 0);
        }

        if(Mouse::isButtonPressed(Mouse::Left)){
            Vector2i clickPos = Mouse::getPosition(windows);
            rectTest.setPosition(Vector2f(clickPos.x-rectTest.getSize().x/2, clickPos.y-rectTest.getSize().y/2));
        }
    }
}

void Game::gameLoop() {

    while(windows.isOpen()){
        Event event;
        while(windows.pollEvent(event)){
            if(event.type == Event::Closed){
                windows.close();
            }
        }
        eventChecker();

        updateGameBoard();
    }

}

//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Game.hpp"

Game::Game(unsigned int x, unsigned int y):largeur(1000),hauteur(800),board(Board(x,y)){

    windows.create(VideoMode(largeur,hauteur), "Crazy Marbles");
    windows.setPosition(Vector2i(250,50));
    windows.setFramerateLimit(30);

    circle.setFillColor(Color::Blue);
    circle.setRadius(5);
    circle.setPosition(Vector2f(largeur / 2 - (circle.getRadius() / 2), 100));

    speed = 5;


}


void Game::updateView() {
    int margeSize = 50;

    Vector2f pos;
    pos.x = circle.getPosition().x + (margeSize / 2) - (largeur / 2);
    pos.y = circle.getPosition().y + (margeSize / 2) - (hauteur / 2);
    view.reset(FloatRect(pos.x, pos.y, largeur, hauteur));
    view.zoom(0.5);
    windows.setView(view);
}


void Game::updateGameBoard() {
    updateView();

    board.drawBoard(&windows);

    //windows.draw(spriteTile);
    windows.draw(circle);
    windows.display();
    windows.clear();
}


void Game::eventChecker() {
    if(windows.hasFocus()){
        if(Keyboard::isKeyPressed(Keyboard::Up)){
            circle.move(0, -1 * speed);
        }
        if(Keyboard::isKeyPressed(Keyboard::Down)){
            circle.move(0, 1 * speed);
        }
        if(Keyboard::isKeyPressed(Keyboard::Right)){
            circle.move(1 * speed, 0);
        }
        if(Keyboard::isKeyPressed(Keyboard::Left)){
            circle.move(-1 * speed, 0);
        }

        if(Mouse::isButtonPressed(Mouse::Left)){
            Vector2i clickPos = Mouse::getPosition(windows);
            circle.setPosition(Vector2f(clickPos.x - circle.getRadius() / 2, clickPos.y - circle.getRadius() / 2));
        }

        checkPos();
    }
}


void Game::checkPos() {
    Vector2f pos = circle.getPosition();
    if(pos.x < 0){
        pos.x = 0;
        circle.setPosition(0, pos.y);
    }
    if(pos.y < 0){
        circle.setPosition(pos.x, 0);
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

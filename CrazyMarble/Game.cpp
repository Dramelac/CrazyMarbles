//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Game.hpp"

Game::Game(unsigned int x, unsigned int y):largeur(1920),hauteur(1080),board(Board(x,y)), zoom(0.5){

    windows.create(VideoMode(largeur,hauteur), "Crazy Marbles");
    windows.setPosition(Vector2i(250,50));
    windows.setFramerateLimit(60);
    //windows.setMouseCursorVisible(false);

    circle.setFillColor(Color::Blue);
    circle.setRadius(5);
    circle.setPosition(Vector2f(365, 60));

    speed = 2;
}


void Game::updateView() {
    int margeSize = 50;

    Vector2f pos;
    pos.x = circle.getPosition().x + (margeSize / 2) - (largeur / 2);
    pos.y = circle.getPosition().y + (margeSize / 2) - (hauteur / 2);
    view.reset(FloatRect(pos.x, pos.y, largeur, hauteur));
    view.zoom(this->zoom);
    windows.setView(view);

}


void Game::updateGameBoard() {
    updateView();

    board.drawBoard(&windows);

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
            circle.move(0, speed);
        }
        if(Keyboard::isKeyPressed(Keyboard::Right)){
            circle.move(speed, 0);
        }
        if(Keyboard::isKeyPressed(Keyboard::Left)){
            circle.move(-1 * speed, 0);
        }


        if(Mouse::isButtonPressed(Mouse::Right)){
            std::cout << circle.getPosition().x << " / " << circle.getPosition().y << std::endl;
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
            if(event.type == Event::Closed) windows.close();

            if (event.type == sf::Event::MouseWheelMoved) zoom += event.mouseWheel.delta * 0.1;
        }
        eventChecker();

        updateGameBoard();
    }

}

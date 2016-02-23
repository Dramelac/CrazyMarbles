//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Game.hpp"

Game::Game(int x, int y):largeur(1000),hauteur(800),board(Board(x,y)), debug(true){
    windows.create(VideoMode(largeur,hauteur), "Crazy Marbles");
    windows.setPosition(Vector2i(250,50));
    windows.setFramerateLimit(30);

    circle.setFillColor(Color::Blue);
    circle.setRadius(15);
    circle.setPosition(Vector2f(largeur / 2 - (circle.getRadius() / 2), hauteur / 2 - (circle.getRadius() / 2)));

    speed = 2;

    if(!tile.loadFromFile("/home/mathieu/Documents/repository/CrazyMarbles/CrazyMarble/data/tile.png")){
        std::cout << "Error loading file" << std::endl;
    }
    //tile.setSmooth(true);
    spriteTile.setTexture(tile);
}


void Game::updateGameBoard() {

    for (int row = 0; row < board.getLargeur(); row++)
    {
        /*
        RectangleShape temp = circle;
        temp.setFillColor(Color::Green);
        temp.setOutlineColor(Color::Blue);
        temp.setOutlineThickness(4);
        temp.setRotation(45);
         */
        Sprite temp;
        temp.setTexture(tile);
        temp.setRotation(45);

        for (int column = 0; column < board.getHauteur(); column++)
        {
            //Sprite texture = board.getMap().map[row][column];
            //Sprite texture;
            //texture.setTexture(tile);

            //double width = tile.getSize().x*1.5;//La largeur
            //double height = tile.getSize().x*1.5;//La hauteur
            int width = tile.getSize().x-19;
            int height = tile.getSize().y-19;
            //float x = (column * width) / 2;
            //float y = row * height + ((column % 2) * (height / 2));
            int x = (largeur/2 - (row * width)) + column * width;
            int y =  row * width + column * height;
            temp.setPosition(Vector2f(x, y));
            windows.draw(temp);
            //windows.display();
            //int yolo;
            //std::cin >> yolo;
        }
    }

/*
    for(int i=0; i<10; i++){
        RectangleShape temp = circle;
        temp.setFillColor(Color::Green);
        for(int y=0;y<10;y++){
            temp.setPosition(Vector2f(i*60,y*60));
            windows.draw(temp);
        }
    }
*/
    debug = false;

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
    }
    if(pos.y < 0){
        pos.y = 0;
    }
    circle.setPosition(pos);

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

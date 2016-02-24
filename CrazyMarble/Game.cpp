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

    if(!tile.loadFromFile("data/tile.png")){
        std::cout << "Error loading file" << std::endl;
    }
    tile.setSmooth(true);
    spriteTile.setTexture(tile);
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

    VertexArray quad(Quads, 4);

    unsigned int width = tile.getSize().x;
    unsigned int height = tile.getSize().y;

    quad[0].texCoords = sf::Vector2f(0, 0);
    quad[1].texCoords = sf::Vector2f(width, 0);
    quad[2].texCoords = sf::Vector2f(width, height);
    quad[3].texCoords = sf::Vector2f(0, height);
    quad.resize(width * height * 4);



    for (int row = 0; row < board.getLargeur(); row++)
    {
        //Sprite temp;
        //temp.setTexture(tile);
        //temp.setRotation(45);

        for (int column = 0; column < board.getHauteur(); column++)
        {
            //Sprite texture = board.getMap().map[row][column];


            int x = (board.getMidleBoard()/2 - (row * (width/2))) + column * (width/2) - width/2;
            int y =  row * (width/(2*1)) + column * (height/(2*1)) + 50;

            //temp.setPosition(Vector2f(x, y));
            quad[0].position = sf::Vector2f(x+width/2, y);
            quad[1].position = sf::Vector2f(x+width, y+height/4);
            quad[2].position = sf::Vector2f(x+width/2, y+height/2);
            quad[3].position = sf::Vector2f(x, y+height/4);


            windows.draw(quad, &tile);
            //windows.display();
            //int yolo;
            //std::cin >> yolo;
        }
    }

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

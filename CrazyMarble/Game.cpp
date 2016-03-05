//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Game.hpp"
#include "Utils/SoundUtils.hpp"

Game::Game(unsigned int x, unsigned int y): width(1920), height(1080), board(Board(x, y)), zoom(0.5), player("Yolo", 20, Position(365, 60)){

    windows.create(VideoMode(width, height), "Crazy Marbles");
    windows.setPosition(Vector2i(250,50));
    windows.setFramerateLimit(60);
    //windows.setMouseCursorVisible(false);

    speed = 2;
}


void Game::updateView() {
    int margeSize = 50;

    Vector2f pos = player.getPosition();
    int temp = (margeSize / 2) - (width / 2);
    pos.x += temp;
    temp = (margeSize / 2) - (height / 2);
    pos.y += temp;
    view.reset(FloatRect(pos.x, pos.y, width, height));
    view.zoom(this->zoom);
    windows.setView(view);
}


void Game::updateGameBoard() {
    updateView();
    board.drawBoard(&windows);
    player.renderPlayer(&windows);

    windows.display();
    windows.clear();
}


void Game::eventChecker() {
    if(windows.hasFocus()){
        if(Keyboard::isKeyPressed(Keyboard::Up)){
            player.move(Position(0, -1 * speed));
        }
        if(Keyboard::isKeyPressed(Keyboard::Down)){
            player.move(Position(0, speed));
        }
        if(Keyboard::isKeyPressed(Keyboard::Right)){
            player.move(Position(speed, 0));
        }
        if(Keyboard::isKeyPressed(Keyboard::Left)){
            player.move(Position(-1 * speed, 0));
        }

        if(Mouse::isButtonPressed(Mouse::Right)){
            std::cout << player.getPosition().x << " / " << player.getPosition().y << std::endl;
        }


        /*
        if(Keyboard::isKeyPressed(Keyboard::Down)){
            SoundUtils::MuteSong();
        }
        if(Keyboard::isKeyPressed(Keyboard::Up)){
            SoundUtils::UnMute();
        }
        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            SoundUtils::UpSong();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Left)) {
            SoundUtils::DownSong();
        }
        */
    }
}


void Game::gameLoop() {
    SoundUtils::InitSong();
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

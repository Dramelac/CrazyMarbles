//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Game.hpp"

Game::Game(unsigned int x, unsigned int y): width(1920), height(1080), board(Board(x, y)), zoom(0.5),
                                            player("Yolo", 20, Position(board.getMidleBoard()/2, 60)){

    windows.create(VideoMode(width, height), "Crazy Marbles");
    windows.setPosition(Vector2i(250,50));
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


void Game::eventChecker(Event event) {

    if(event.type == Event::Closed) windows.close();

    if (event.type == sf::Event::MouseWheelMoved) {
        zoom += event.mouseWheel.delta * -0.1;
        if (zoom < 0.1){
            zoom = 0.1;
        }
    }

    if (Mouse::isButtonPressed(Mouse::Right)) {
        std::cout << player.getPosition().x << " / " << player.getPosition().y << ", m : " << board.getMidleBoard() << std::endl;
    }

}


void Game::keyboardChecker() {

    if(windows.hasFocus()) {
        if (Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::Z)) {
            player.move(Position(0, -1 * speed));
        }
        if (Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S)) {
            player.move(Position(0, speed));
        }
        if (Keyboard::isKeyPressed(Keyboard::Right) || Keyboard::isKeyPressed(Keyboard::D)) {
            player.move(Position(speed, 0));
        }
        if (Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::Q)) {
            player.move(Position(-1 * speed, 0));
        }


        // Music Control //

        if(Keyboard::isKeyPressed(Keyboard::M)){
            SoundUtils::MuteSong();
        }
        if(Keyboard::isKeyPressed(Keyboard::P)){
            SoundUtils::UnMute();
        }
        if (Keyboard::isKeyPressed(Keyboard::O)) {
            SoundUtils::UpSong();
        }
        else if (Keyboard::isKeyPressed(Keyboard::L)) {
            SoundUtils::DownSong();
        }

    }
}

void Game::gameLoop() {
    windows.setFramerateLimit(60);
    SoundUtils::InitSong();
    Clock clock;
    int count=0;
    while(windows.isOpen()){
        Event event;
        while(windows.pollEvent(event)){
            eventChecker(event);
        }
        keyboardChecker();

        updateGameBoard();

        Time fps = clock.getElapsedTime();
        count++;
        if(fps.asSeconds() >= 1){
            std::cout << "FPS : " << count << std::endl;
            count = 0;
            clock.restart();
        }


    }

}

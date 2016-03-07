#include <iostream>
#include "Game.hpp"
#include "Utils/TextureLoader.hpp"

using namespace std;

int main() {
    TextureLoader::LoadingTextures();
    //Game game(30,30);
    Game game(10,10);
    game.gameLoop();
    return 0;
}

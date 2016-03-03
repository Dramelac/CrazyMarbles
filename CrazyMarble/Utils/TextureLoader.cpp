//
// Created by mathieu on 03/03/16.
//

#include "TextureLoader.hpp"

Texture TextureLoader::tile;
Texture TextureLoader::tileWall;

void TextureLoader::LoadingTextures() {

    if(!tile.loadFromFile("data/tile.png")){
        std::cout << "Error loading file" << std::endl;
    }
    if(!tileWall.loadFromFile("data/wall.png")){
        std::cout << "Error loading file" << std::endl;
    }

}

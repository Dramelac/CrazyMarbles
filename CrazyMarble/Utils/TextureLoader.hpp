//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_TEXTURELOADER_HPP
#define CRAZYMARBLE_TEXTURELOADER_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

class TextureLoader {
public:
    static void LoadingTextures();
    static Texture tile;
    static Texture tileWall;

};

#endif //CRAZYMARBLE_TEXTURELOADER_HPP

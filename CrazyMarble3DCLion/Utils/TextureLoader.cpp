#include "TextureLoader.h"


video::ITexture* TextureLoader::tile;
video::ITexture* TextureLoader::sphere;

void TextureLoader::LoadingTextures(video::IVideoDriver* driver) {

    tile = driver->getTexture("data/model/cube_tex.png");
    sphere = driver->getTexture("data/model/sphere_color.png");

}

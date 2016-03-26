#include "TextureLoader.h"


video::ITexture* TextureLoader::tile;

void TextureLoader::LoadingTextures(video::IVideoDriver* driver) {

    tile = driver->getTexture("data/earthbump.jpg");

}

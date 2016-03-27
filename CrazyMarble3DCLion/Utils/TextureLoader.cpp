#include "TextureLoader.h"


video::ITexture* TextureLoader::tile;

void TextureLoader::LoadingTextures(video::IVideoDriver* driver) {

    tile = driver->addRenderTargetTexture(core::dimension2d<u32>(64,64),"data/tile.jpg");

}

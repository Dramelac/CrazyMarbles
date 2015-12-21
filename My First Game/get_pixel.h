#ifndef GET_PIXEL_H_INCLUDED
#define GET_PIXEL_H_INCLUDED

#include <SDL.h>
/*
 * Return the pixel value at (x, y)
 * NOTE: The surface must be locked before calling this!
 * NOTE: SDL_function, but not set in the API, this is only a part of doc
 */
Uint32 getpixel(SDL_Surface *surface, int x, int y);

#endif // GET_PIXEL_H_INCLUDED

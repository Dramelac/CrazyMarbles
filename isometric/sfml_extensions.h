#ifndef SFML_EXTENSIONS_H
#define SFML_EXTENSIONS_H
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>

/***********
Implement helper functions and extensions to circumvent some of the small problems of binding to SFML
************/

namespace sf
{
    // Implement a function to map video modes into a user-provided array to hide the std::vector from Lua
    int GetFullscreenModes(int maxnummodes, sf::VideoMode *modes);
};

#endif

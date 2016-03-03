//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_ENTITIES_HPP
#define CRAZYMARBLE_ENTITIES_HPP

#include <iostream>
#include "../Utils/Position.hpp"

using namespace std;

class Entities {
private:
    Position position;
    string name;
    int health;

public:

    Entities(const string &name, int health);
};


#endif //CRAZYMARBLE_ENTITIES_HPP

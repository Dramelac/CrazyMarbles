//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_ENTITIES_HPP
#define CRAZYMARBLE_ENTITIES_HPP

#ifdef __linux__
    #include "../Utils/Position.h"
#elif _WIN32
    #include "Position.h"
#else

#endif

#include <string>


using namespace std;

class Entities {
protected:
	Position position;
	string name;
	int health;

public:

	Entities(const string &name, int health);
	Entities(const Position &position, const string &name, int health);
	Entities();
};


#endif //CRAZYMARBLE_ENTITIES_HPP

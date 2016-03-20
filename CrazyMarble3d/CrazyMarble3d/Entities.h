//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_ENTITIES_HPP
#define CRAZYMARBLE_ENTITIES_HPP

#include <string>
#include "Position.h"

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

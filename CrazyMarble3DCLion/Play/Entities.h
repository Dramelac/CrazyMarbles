//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_ENTITIES_HPP
#define CRAZYMARBLE_ENTITIES_HPP


#include "../Utils/Position.h"

#include <string>

using namespace std;

class Entities {
protected:
	Position position;
	std::string name;
	int health;

public:

	Entities(const std::string &name, int health);
	Entities(const Position &position, const std::string &name, int health);
	Entities();
};


#endif //CRAZYMARBLE_ENTITIES_HPP

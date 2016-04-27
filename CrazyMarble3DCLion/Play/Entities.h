//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_ENTITIES_HPP
#define CRAZYMARBLE_ENTITIES_HPP


#include <string>

using namespace std;

class Entities {
protected:
	std::string name;
	int health;

public:
	Entities(const std::string &name, int health);
	Entities();
};


#endif //CRAZYMARBLE_ENTITIES_HPP

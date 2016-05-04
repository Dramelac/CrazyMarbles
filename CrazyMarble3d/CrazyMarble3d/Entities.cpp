//
// Created by mathieu on 03/03/16.
//

#include "Entities.h"

Entities::Entities(const string &name, int health) : position(Position()), name(name), health(health) { }


Entities::Entities(const Position &position, const string &name, int health) : position(position), name(name),
health(health) { }

Entities::Entities() : position(Position()), name(""), health(1) { }
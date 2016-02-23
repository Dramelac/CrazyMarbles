//
// Created by mathieu on 23/02/16.
//

#include "Cell.hpp"

Cell::Cell() : value(0) { }

int Cell::getValue() const {
    return value;
}

void Cell::setValue(int value) {
    Cell::value = value;
}


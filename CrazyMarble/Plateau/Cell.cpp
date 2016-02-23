//
// Created by mathieu on 23/02/16.
//

#include "Cell.hpp"

int Cell::getValue() const {
    return value;
}

void Cell::setValue(int value) {
    Cell::value = value;
}
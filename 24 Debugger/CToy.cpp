#include <iostream>
#include "CToy.h"

CToy::CToy(std::string color, std::string animal) :  _color(color), _animal(animal){}

CToy::~CToy() = default;

std::string CToy::show() {
    return "CToy('" + _color + "', '" + _animal + "')";
}

#pragma once
#include <string>
#include "Item.h"

class Fruit : public Item {
public:
    Fruit(std::string country, int id, std::string name, int price) : 
        _country(country), Item(id, name, price) {}
    ~Fruit() = default;

    std::string getCountry() { return _country; }
private:
    std::string _country;
};
#pragma once
#include <string>
#include "Dairy.h"

class Yogurt : public Dairy {
public:
    Yogurt(std::string flavour, bool bio, std::string brand, double volume, double richness, int id, std::string name, int price) :
        _flavour(flavour), _bio(bio), Dairy(brand, volume, richness, id, name, price) {}
    ~Yogurt() = default;

    std::string getFlavour() { return _flavour; }
    bool isBio() { return _bio; } 
private:
    std::string _flavour;
    bool _bio;
};
#pragma once
#include <string>
#include "Item.h"

class Dairy : public Item {
public:
    Dairy(std::string brand, double volume, double richness, int id, std::string name, int price) :
        _brand(brand), _volume(volume), _richness(richness), Item(id, name, price) {}
    ~Dairy() = default;

    double getVolume() { return _volume; }
    double getRichness() { return _richness; }
private:
    std::string _brand;
    double _volume;
    double _richness;
};
#pragma once
#include <string>

class Item {
public:
    Item(int id, std::string name, int price) : 
        _id(id), _name(name), _price(price) {}
    ~Item() = default;

    std::string getName() { return _name; }
private:
    int _id;
    std::string _name;
    int _price;
};
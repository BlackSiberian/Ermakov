#pragma once
#include <vector>
#include <pair>
#include "goods.h"


class Cart {
public:
    Cart();
    ~Cart() = default;
    
    void addItem();
    void removeItem();
private:
    std::vector<std::pair<Item&, int>> _list;
};
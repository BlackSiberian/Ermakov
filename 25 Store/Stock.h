#pragma once
#include "goods.h"

class Stock {
public:
    Stock();
    ~Stock() = default;

    void addItem();
private:
    std::vector<std::pair<Item&, int>> _list;
}
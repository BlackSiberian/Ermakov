#pragma once
#include <string>
#include "Order.h"

class Customer {
public:
    Customer(std::string name) : _name(name) { _balance = 0; }
    ~Store() = default;
    
    void topUp(int amount) { _balance += amount; }
    //void addToCart(Item& item, int amount);
    //void orderCreate();
    //void orderPay(int& order) { _balance -= order.sum; }
    std::string getName() { return _name; }
private:
    int _balance;
    std::string _name;
};
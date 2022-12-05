#pragma once
#include <string>

class Store {
public:
    Store() { 
        _balance = 0; 
        _numId = 0;
    }
    ~Store() = default;
    
    void topUp(int amount) { _balance += amount; }
private:
    int _balance;
    int _numId;
};
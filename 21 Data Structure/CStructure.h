#pragma once

#include <vector>

template <class T>
class CStructure {
public:
    virtual void push(T x) = 0;
    virtual int pop() = 0;
protected:
    std::vector<T> container;
};
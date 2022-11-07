#pragma once

template <class T>
class CStructure {
public:
    virtual void push(T element) = 0;
    virtual T pop() = 0;
};
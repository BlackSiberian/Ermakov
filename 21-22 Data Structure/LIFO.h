#pragma once

#include <vector>
#include "CStructure.h"

template <class T>
class LIFO : public CStructure<T> {
public:
    LIFO();
    ~LIFO();

    void push(T element);
    T pop();
private:
    std::vector<T> container;
};
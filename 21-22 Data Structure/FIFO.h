#pragma once

#include <vector>
#include "CStructure.h"

template <class T>
class FIFO : public CStructure<T> {
public:
    FIFO();
    ~FIFO();

    void push(T element);
    T pop();
private:
    std::vector<T> container;
};


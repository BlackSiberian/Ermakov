#pragma once

#include "CStructure.h"

template <class T>
class FIFO : public Structure {
public:
    FIFO(T* array);
    ~FIFO();

    void push(T element) final;
    T pop() final;
};


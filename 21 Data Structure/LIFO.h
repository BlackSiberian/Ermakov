#pragma once

#include "CStructure.h"

template <class T>
class LIFO : public Structure {
public:
    LIFO(T* array);
    ~LIFO();

    void push(T element) final;
    T pop() final;
};
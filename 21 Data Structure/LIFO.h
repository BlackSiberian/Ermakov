#pragma once

#include "Structure.h"

class LIFO : public Structure {
public:
    LIFO(int* array);
    ~LIFO();

    void push(int x);
    int pop();
private:
    int *stack;
};
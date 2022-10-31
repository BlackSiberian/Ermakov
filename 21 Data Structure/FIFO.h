#pragma once

#include "Structure.h"

class FIFO : public Structure {
public:
    FIFO(int* array);
    ~FIFO();

    void push(int x);
    int pop();
private:
    int *queue;
};


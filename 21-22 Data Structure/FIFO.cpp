#include "FIFO.h"

template <typename T>
FIFO<T>::FIFO() = default;

template <typename T>
void FIFO<T>::push(T element) {
    container.push_back(element);
}

template <typename T>
T FIFO<T>::pop() {
    T temp = container.front();
    container.erase(container.begin());
    return temp;
}

template <typename T>
FIFO<T>::~FIFO() = default;
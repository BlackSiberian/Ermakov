#include "LIFO.h"

template <typename T>
LIFO<T>::LIFO() = default;

template <typename T>
void LIFO<T>::push(T element) {
    container.push_back(element);
}

template <typename T>
T LIFO<T>::pop() {
    T temp = container.back();
    container.pop_back();
    return temp;
}

template <typename T> 
LIFO<T>::~LIFO() = default;
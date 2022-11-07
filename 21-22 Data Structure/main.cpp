#include <iostream>

#include "CStructure.h"
#include "LIFO.h"
#include "FIFO.h"

#define N 5

using namespace std;

int main() {
    CStructure<int>* queue = new FIFO<int>;
    CStructure<int>* stack = new LIFO<int>;

    // CStructure<double>* queue = new FIFO<double>;
    // CStructure<double>* stack = new LIFO<double>;

    for (int i = 0; i < N; i++) {
        int temp;
        // double temp;
        cin >> temp;
        queue->push(temp);
        stack->push(temp);
    }
    cout << "FIFO: ";
    for (int i = 0; i < N; i++) 
        cout << queue->pop() << "  ";
    cout << endl << "LIFO: ";
    for (int i = 0; i < N; i++)
        cout << stack->pop() << "  ";
    delete queue;
    delete stack;
    return 0;
}
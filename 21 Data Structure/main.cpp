#include <iostream>

#include "CStructure.h"
#include "LIFO.h"
#include "FIFO.h"

using namespace std;

int main() {
    int array[10];
    CStructure* queue = new FIFO(array);
    CStructure* stack = new LIFO(array);
    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;
        queue->push(temp);
        stack->push(temp);
    }
    cout << "FIFO: ";
    for (int i = 0; i < 10; i++) 
        cout << queue->pop() << "  ";
    cout << endl << "LIFO: ";
    for (int i = 0; i < 10; i++)
        cout << stack->pop() << "  ";
    delete queue;
    delete stack;
    return 0;
}
#include <iostream>

#include "Structure.h"
#include "LIFO.h"
#include "FIFO.h"

using namespace std;

int main() {
    int array[10];
    Structure* queue = new FIFO(array);
    Structure* stack = new LIFO(array);
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
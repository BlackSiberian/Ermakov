#include <iostream>

#include "Structure.h"
#include "LIFO.h"
#include "FIFO.h"

using namespace std;

int main() {
    int array[10];
    Structure queue = FIFO(array);
    Structure stack = LIFO(array);
    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;
        queue.push(temp);
        stack.push(temp);
    }
    cout << "FIFO: ";
    for (int i = 0; i < 10; i++) 
        cout << queue.pop() << "  ";
    cout << endl << "LIFO: ";
    for (int i = 0; i < 10; i++)
        cout << stack.pop() << "  ";
    return 0;
}
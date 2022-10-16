#include <iostream>
#include <ctime>

using namespace std;

void quicksort(int* array, int size) {
    int head = 0;
    int tail = size - 1;
    int middle = array[size / 2];

    do {
        while (array[head] < middle) head++;
        while (array[tail] > middle) tail--;
        if (head <= tail) {
            swap(array[head], array[tail]);
            head++;
            tail--;
        }
    } while (head < tail);

    if (tail > 0) quicksort(array, tail + 1);
    if (head < size) quicksort(&array[head], size - head);
}


int main() {
    cout << "Enter number of elements:" << endl;
    int n;
    cin >> n;
    cout << "Enter values:" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, n);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
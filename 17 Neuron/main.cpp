#include <iostream>
#include <random>
#include <vector>
#include <ctime>
#include "neuron.h"

using namespace std;

vector<double> randomVector(int size) {
    vector<double> a(size);

    for (double & i : a)
        i = (double)(rand())/RAND_MAX;
        //i = (double)(rand() % 10 + 1); 
    return a;
}

int main() {
    srand(time(nullptr));
    int n = 5;
    bool isSigma = true;
    neuron axon = neuron(randomVector(n), randomVector(n + 1), n, isSigma);
    axon.print();
    cout << axon.calculate() << endl;
    getchar();
    return 0;
}
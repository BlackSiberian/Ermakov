#include "neuron.h"

#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::exp;
using std::cout;
using std::endl;

neuron::neuron(vector<double> input, vector<double> weight, int size, bool isSigma) : input(input), weight(weight), size(size), isSigma(isSigma) {
}

double neuron::calculate() {
    double output = 0;
    for (int i = 0; i < size; i++)
        output += input[i] * weight[i];
    output += weight[weight.size() - 1];
    if (isSigma) return sigmoid(output);
    else return output;
}

double neuron::sigmoid(double x) {
    return 1 / (1 + exp(-x));
}

int neuron::getSize() const {
    return size;
}

void neuron::print() const {
    for (int i = 0; i < size; i++)
        cout << weight[i] << "*" << input[i] << " + ";
    cout << weight[size] << endl;
}

neuron::~neuron() = default;
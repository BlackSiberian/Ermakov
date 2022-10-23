#pragma once

#include <vector>

class neuron {
public:
    neuron(std::vector<double> input, std::vector<double> weight, int size, bool isSigma);
    ~neuron();

    double calculate(); 
    int getSize() const;
    void print() const;

private:
    int size;
    bool isSigma;
    double output;
    std::vector<double> input;
    std::vector<double> weight;
    double sigmoid(double x);
};
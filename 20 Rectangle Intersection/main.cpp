#include <iostream>
#include <fstream>

#include "rectangle.h"

using namespace std;

int main() {
    fstream data;
    data.open("Data.txt");
    double input[2][4];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++)
            data >> input[i][j];
        cout << "Rectangle: = [" << input[i][0] << "; " << input[i][1] << "][" << input[i][2] << "; " << input[i][3] << "]" << endl;
    }
    rectangle rctg1 = rectangle(input[0][0], input[0][1], input[0][2], input[0][3]);
    rectangle rctg2 = rectangle(input[1][0], input[1][1], input[1][2], input[1][3]);
    if (rctg1.isIntersected(rctg2))
        cout << "Intersection" << endl;
    else cout << "No intersection" << endl;
    getchar();
    data.close();
    return 0;
}
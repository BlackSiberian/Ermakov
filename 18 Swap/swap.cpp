#include <iostream>

using namespace std;

void swap1(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

void swap2(int& a, int& b) {
    a = a + b;
    b = a - b;
    a  = a - b;
}

void swap3(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void swap4(int& a, int& b) {
    a = a * b;
    b = a / b;
    a = a / b;
}

void swap5(pair<int, int>& p) {
    p = {p.second, p.first};
}

int main() {
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    swap1(a, b);
    cout << "Swap via temporary variable: " << a << " " << b << endl;
    swap2(a, b);
    cout << "Swap via sum and substraction: " << a << " " << b << endl;
    swap3(a, b);
    cout << "Swap using XOR: " << a << " " << b << endl;
    swap4(a, b);
    cout << "Swap via multiply and divide: " << a << " " << b << endl;
    pair<int, int> ab {a, b};
    swap5(ab);
    cout << "Swap using pair: " << ab.first << " " << ab.second << endl;
    return 0;
}
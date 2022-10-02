#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, output;
    cin >> input;
    for (char letter : input)
        output += letter;
    cout << output << endl;
    return 0;
}

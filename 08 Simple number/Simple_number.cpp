#include <iostream>
#include <cmath>

using namespace std;

int input() {
  int n;
  bool flag;
  do {
    cout << "Enter a number. I'll determine if it is prime" << endl;
    cin >> n;
    flag = cin.good();
    if (!flag)
      cout << "Input error!" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
  } while (!flag);
  return n;
}

int main() {
  int n = input();
  int flag = true;
  for (int i = 2; i <= sqrt(n) && flag; i++)
    if (n % i == 0) flag = false;
  if (flag) cout << "It is a prime number" << endl;
  else cout << "It is a compound number" << endl;
  return 0;
}
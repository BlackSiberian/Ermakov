#include <iostream>

using namespace std;

void fibbonachi(int x) {
  unsigned long long a = 1, b = 1;
  cout << a << " " << b << " ";
  for (int i = 2; i < x; i++) {
    unsigned long long t = b;
    b += a;
    a = t;
    cout << b << " ";
  }
  cout << endl;
}

int getInt() {
  bool err;
  string s;
  do {
    err = false;
    cout << "Enter a number: ";
    cin >> s;
    if (s.length() > 3) err = true;
    else
      for (char i : s)
        if (i < '0' || i > '9') err = true;
    if (stoi(s) < 1 || stoi(s) > 100) err = true;
    if (err) cout << "Incorrect input. ";
  } while (err);
  return stoi(s);
}

int main() {
  int x = getInt();
  if (x > 1) fibbonachi(x);
  else cout << x << endl;
  return 0;
}
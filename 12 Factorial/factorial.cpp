#include <iostream>
#include <limits>

using namespace std;

unsigned long long fact (int n) {
  unsigned long long f = 1;
  for (int i = 1; i <= n; i++)
    (f < numeric_limits<unsigned long long>::max() / i) ? f *= i : f = 0;
  return f;
}

int getInt() {
  bool err;
  string s;
  do {
    err = false;
    cout << "Enter a number: ";
    cin >> s;
    if (s.length() > 6) err = true;
    else
      for (char i : s)
        if (i < '0' || i > '9') err = true;
    if (err) cout << "Incorrect input. ";
  } while (err);
  return stoi(s);
}

int main() {
  int x = getInt();
  unsigned long long f = fact(x);
  if (f) cout << f << endl;
  else cout << "Overflow" << endl;
  return 0;
}
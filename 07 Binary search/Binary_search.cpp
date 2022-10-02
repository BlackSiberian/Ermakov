#include <iostream>

#define L 1
#define R 100

using namespace std;

int main() {
  cout << "Choose a number from " << L << " to " << R << endl;
  int l = L;
  int r = R;
  int ans = 0;
  int atmpt;
  int mid;
  
  for (atmpt = 0; (l <= r) && (ans != 3); atmpt++) {
    mid = (l + r) / 2;
    cout << "Is your number bigger than " << mid << "? (1 - yes, 2 - no, 3 - equals)" << endl;
    cin >> ans;
    if (ans == 1) l = mid;
    else if (ans == 2) r = mid;
  }
  cout << "You've chosen " << mid << ". Number of attempts: " << atmpt << endl;
  return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
  string word, mask;
  cout << "Guess a word:" << endl;
  cin >> word;
  cout << endl;
  for (int i = 0; i < word.size(); i++)
    mask += "-";
  cout << mask << endl;
  int count = word.size();
  while (count) {
    char l; //Letter
    bool flag = false;
    cout << "Enter letter: ";
    cin >> l;
    cout << endl;
    for (int i = 0; i < word.size(); i++)
      if (l == word[i]) {
        flag = true;
        count--;
        mask[i] = l;
      }
    if (flag) {
      cout << "You're right" << endl;
      cout << mask << endl;
    }
    else {
      cout << "You're wrong" << endl;
      cout << mask << endl;
    }
  }
  cout << "You guessed the word " << word << endl;
  return 0;
}
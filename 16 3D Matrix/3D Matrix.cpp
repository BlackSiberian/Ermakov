#include <iostream>

using namespace std;

void printMatrix(int ***mtx, int x, int y, int z) {
  for(int i = 0; i < x; i++) {
    for(int j = 0; j < y; j++) {
      for(int k = 0; k < z; k++)
        if (mtx[i][j][k] < 10)
          cout << " " << mtx[i][j][k] << " ";
        else cout << mtx[i][j][k] << " ";
          cout << endl;
    }
    cout << "--------" << endl;
  }
}

int main() {
  int x = 3, y = 3, z = 3;
  int ***mtx = new int**[x];
  for (int i = 0; i < x; i++) {
    mtx[i] = new int*[y];
    for (int j = 0; j < y; j++)
      mtx[i][j] = new int[z];
  }
  int value = 1;
  for(int i = 0; i < x; i++)
    for(int j = 0; j < y; j++)
      for(int k = 0; k < z; k++) {
        mtx[i][j][k] = value;
        value++;
      }
  printMatrix(mtx, x, y, z);
  cout << "Alternative index order" << endl
    << "--------" << endl;
  value = 1;
  for(int i = x - 1; i >= 0; i--)
    for(int j = y - 1; j >= 0; j--)
      for(int k = z - 1; k >= 0; k--) {
        mtx[i][j][k] = value;
        value++;
      }
  printMatrix(mtx, x, y, z);
  free(mtx);
  return 0;
}
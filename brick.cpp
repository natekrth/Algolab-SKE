#include <iostream>

using namespace std;

const int ROWS = 9;
const int COLS = 9;

int main() {
  int t;
  cin >> t; // read the number of test cases

  while (t--) {
    int wall[ROWS][COLS];

    // fill in the ninth row with the given numbers
    for (int i = 0; i < COLS; i++) {
      cin >> wall[8][i];
    }

    // fill in the other rows
    for (int i = 7; i >= 0; i--) {
      for (int j = 1; j <= i + 1; j++) {
        // calculate the number of the brick at position (i, j)
        // by adding the numbers of the two bricks below it
        if (j % 2 == 1) {
          wall[i][j - 1] = wall[i + 1][j - 2] + wall[i + 1][j];
        } else {
          wall[i][j - 1] = wall[i + 1][j - 1] + wall[i + 1][j];
        }
      }
    }

    // print the numbers of all bricks in the wall
    for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < i + 1; j++) {
        cout << wall[i][j] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}

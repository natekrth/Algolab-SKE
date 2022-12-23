#include <iostream>
#include <string>

using namespace std;

int main() {
  // Read the number of test cases
  int t;
  cin >> t;
  // Iterate over the test cases
  for (int i = 1; i <= t; i++) {
    // Read the size of the field
    int n;
    cin >> n;
    // Read the description of the field
    string field;
    cin >> field;
    // Initialize the number of scarecrows to 0
    int scarecrows = 0;
    // Iterate over the field
    for (int j = 0; j < n; j++) {
      // If the current cell is a crop-growing spot and the cell to its left is infertile,
      // place a scarecrow and skip the next cell
      if (field[j] == '.' && (j == 0 || field[j-1] == '#')) {
        scarecrows++;
        j++;
      }
    }
    // Print the result
    cout << "Case " << i << ": " << scarecrows << endl;
  }
  return 0;
}

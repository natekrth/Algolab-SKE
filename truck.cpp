#include <iostream>

using namespace std;

int main()
{
  int package;
  int weight[50];
  int sum = 0;
  int count = 0;

  cin >> package;
  for (int i=0; i<package; i++) {
    cin >> weight[i];
  }
  for (int j=0; j<package; j++) {
    if (sum+weight[j] <= 1000) {
      sum += weight[j];
    }
    else {
      sum = 0;
      sum = weight[j];
      count += 1;
    }
  }
  cout << count+1 << endl;
}
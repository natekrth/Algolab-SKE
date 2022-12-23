#include <iostream>

using namespace std;

int main()
{
  int n;
  int x[1000];

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> x[i];
  }
  for (int l=n-1; l>=0; l--) {
    cout << x[l] << endl;
  }
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                cout << i << ' ' << j << endl;
            }
        }
}

#include <iostream>

using namespace std;

bool check_prime(int p)
{
    if (p <= 1) {
      return false;
    }
    for (int i=2; i<p; i++) {
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    int dummy = 0;
    int x[100];
    int count = 0;
    cin >> n;

    for (int j=0; j<=n; j++) {
        if (check_prime(j)) {
            if (n % j == 0) {
                count++;
            }
        }
    }
    cout << count << endl;
}
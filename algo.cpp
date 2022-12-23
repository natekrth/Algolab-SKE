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

int main() {
  int p;
  cin >> p;

  while (true) {
    if (check_prime(p+1)) {
      cout << p+1 << endl;
      p++;
      break;
    }
    else {
      p++;
    }
  }
}
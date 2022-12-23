#include <iostream>

using namespace std;

int main() {
    int n;
    int eat[1000];
    int summation = 0;
    int last = 0;
    bool can_eat = true;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> eat[i];
    }

    for (int j = 0; j < n; j++) {
        if((eat[j] >= 1000) && (can_eat)) {
            summation += 1000;
            can_eat = false;
        }
        else if (!can_eat) {
            can_eat = true;
        }
        else {
            summation += eat[j];
            can_eat = true;
        }
    }

    cout << summation << endl;
}
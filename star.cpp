#include <iostream>

using namespace std;

int main() {
    int p;
    cin >> p;

    for(int i = 1; i <= p; i++) {
        for(int l = 1; l <= p-i; l++) {
            cout << " ";
        }
        for(int k = 1; k <= p-(p-i); k++) {
            cout << "*";
        }
        cout << endl;
    }
}
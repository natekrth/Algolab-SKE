#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    int save[100];
    int n;

    for (int i = 0; i < m; i++) {
        cin >> save[i];
        if (save[0] == 1) {
            cin >> n;
            for (int j = 1; j < n+1; j++) {
                cin >> save[j];
            }
        }
        else if (save[0] == 2) {
            
        }
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    int count = 0;
    int cases = 1;
    int N;
    while (t != 0) {
        cin >> N;
        vector<char> land(N+2, '#');
        for (int i = 0; i < N; i++) {
            cin >> land[i];
        }
        for (int j = 0; j < N; j++) {
            if (land[j] == '.') {
                j += 2;
                count++;
            }
        }
        cout << "Case " << cases << ": " << count << endl;
        cases++;
        count = 0;
        t--;
    }
}
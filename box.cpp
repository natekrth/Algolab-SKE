#include <iostream>

using namespace std;

int main()
{
    int n;
    int save = 0;
    int count = 0;
    cin >> n;

    for (int k = 0; k <= n; k++)
    {
        for (int i=k+1; i<n+1; i++) {
            cout << i;
            count += 1;
            if (count == n) {
                break;
            }
        }
        for (int j=1; j<=k ;j++){
            if (k == n) {
                break;
            }
            cout << j;
        }
        cout << endl;
    }
}
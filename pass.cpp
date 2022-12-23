#include <iostream>
using namespace std;

void find_max_min(int b[], int n, int* max, int* min) {
    *max = b[0];
    *min = b[0];
    for (int j=0; j<n; j++) {
        if (*max < b[j]) {
            *max = b[j];
        }
    }
    for (int k=0; k<n; k++) {
        if (*min > b[k]) {
            *min = b[k];
        }
    }
}

int main()
{
    int a[1000];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx, mn;
    find_max_min(a, n, &mx, &mn);

    cout << "max = " << mx << endl;
    cout << "min = " << mn << endl;
}
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int k;
    int r;
    cin >> n >> k;
    int keep_num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> keep_num[i];
    } 
    int g = sizeof(keep_num) / sizeof(keep_num[0]);
    sort(keep_num, keep_num + g);
    r = n/k;
    for (int j = k-1; j < floor(g); j += k)
    {
        cout << keep_num[j] << endl;
    }
}

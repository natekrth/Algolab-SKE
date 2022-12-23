#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int k = 0;
    int x;
    int ans[m];
    for (int i=0; i < m; i++)
    {
        cin >> k >> x;
        if (k == 1)
        {
            ans[i] = x;
        }
        else if (k == 2)
        {
            int n = sizeof(ans) / sizeof(ans[0]);
            bool exists = find(ans, ans + n, x) != ans + n;
            if (exists) 
            {
                cout << ans << endl;
                // cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}
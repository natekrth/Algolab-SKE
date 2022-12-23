#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int k = 0;
    int x;
    int ans[m];
    vector<int> result;
    for (int i=0; i < m; i++)
    {
        cin >> k >> x;
        if (k == 1)
        {
            result.push_back(x);
        }
        else if (k == 2)
        {
            // int n = sizeof(ans) / sizeof(ans[0]);
            bool exists = find(result.begin(), result.end(), x) != result.end();
            if (exists) 
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int ans = 0;
    int repeat = 0;
    vector<int> vect;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vect.push_back(m);
    }
    sort(vect.begin(), vect.end());
    for(int j = 0; j < 100000; j++)
    {
        repeat = count(vect.begin(), vect.end(), j);
        if (repeat >= 3)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
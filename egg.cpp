#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i < t+1; i++)
    {
        int n, p, q;
        int sum=0;
        int count=0;
        int compute=0;
        cin >> n >> p >> q;
        vector<int> eggs(n);
        for(int j = 0; j < n; j++)
        {
            cin >> eggs[j];
        }
        sort(eggs.begin(), eggs.end());
        while((count < p) && (count < n) && (sum+eggs[count] <= q))
        {
            // compute = eggs[count];
            sum += eggs[count];
            // cout << sum << " " << count << endl;
            count++;
        }
        cout << "Case " << i << ": " << count << endl;
    }
}
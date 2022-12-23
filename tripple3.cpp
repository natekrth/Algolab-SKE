#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n = 0;
    int ans = 0;
    map<int, int> data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int integer = 0;
        cin >> integer;
        if (data.find(integer) == data.end())
        {
            data[integer] = 1;
        }
        else
        {
            data[integer] += 1;
        }
    }

    for (auto it = data.cbegin(); it != data.cend(); it++)
    {
        if(it->second >= 3)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
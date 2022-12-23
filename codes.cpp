#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n = 0;
    int max = 0;
    int ans = 0;
    map<int, int> data;
    vector<int> vect;
    vector<int> save;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vect.push_back(m);
    }
    for(int j = 0; j < n-1; j++)
    {
        save.push_back(abs(vect[j] - vect[j+1]));
    }
    for(int j = 0; j < n-2; j++)
    {
        save.push_back(abs(vect[j] - vect[j+2]));
    }
    for (int i = 0; i < save.size(); i++)
    {
        int integer = save[i];
        // cout << integer << endl;
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
        if(max < it->second)
        {
            max = it->second;
            ans = it->first;
        }
    }
    cout << ans << endl;
}
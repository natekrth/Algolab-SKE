#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int upper_diff, lower_diff;
    set<int> collection;
    set<int>::iterator up, low;
    vector<int> save;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        collection.insert(x);
    }
    for (int j = 0; j < m; j++)
    {
        int y;
        cin >> y;
        auto up = collection.upper_bound(y);
        auto low = collection.lower_bound(y);
        low--;
        upper_diff = abs(*up - y);
        lower_diff = abs(*low - y);
        if(upper_diff > lower_diff)
        {
            cout << (*low) << endl;
        }
        else
        {
            cout << (*up)<< endl;
        }
        // for (set<int>::iterator i = up.begin(); i!= up.end(); i++)
        // {
        //     cout << *i << " ";
        // }
        // save.push_back(*up);
        // cout << *(--up) << " " << *(--low) << endl;
        // auto upper = collection.upper_bound(y);
        // int test = *upper;
        // cout << test << endl;
    }
}
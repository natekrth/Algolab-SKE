#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int t;
    int l;
    int k;
    int x;
    vector<int> row;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> l;
        if(l == 1)
        {
            cin >> k >> x;
            if (row.size() == 0 || k > row.size())
            {
                row.push_back(x);
            }
            else
            {
                row.insert(row.begin() + k, x);
            }
        }
        else if(l == 2)
        {
            cin >> k;
            if(row.size() == 0 || k > row.size())
            {
                continue;
            }
            else
            {
                row.erase(row.begin() + (k-1));
            }
        }
    }
    for (int i = 0; i < row.size(); i++) {
        cout << row[i] << endl;
    }
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int index = 0;
    int current = 0;
    vector<int> value;
    vector<int> x;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        value.push_back(in);
    }
    for (int i = 0; i < m; i++)
    {
        int xin;
        cin >> xin;
        x.push_back(xin);
    }
    for (int j = 0; j < x.size(); j++)
    {
        int sum = 0;
        index = 0;
        if(index > value.size())
        {
            index = 0;
        }
        while (true)
        {
            // cout << sum << endl;
            sum += value[index];
            if (sum >= x[j])
            {
                if(sum == x[j])
                {
                    value.erase(value.begin() + index-1);
                }
                else
                {
                    value.erase(value.begin() + index);
                }
                cout << value[index] << endl;
                // cout << sum << endl;
                break;
            }
            // for (int i = 0; i < value.size(); i++)
            //     {
            //         cout << value[i] << endl;
            //     }
            index++;
        }
        index++;
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << value[i] << endl;
    // }
}
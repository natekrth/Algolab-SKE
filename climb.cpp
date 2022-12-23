#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    int h;
    int m;
    vector<int> height;
    vector<int> height_minus;
    vector<pair<int,int> > save;
    vector<int> energy;

    height.push_back(0);
    height_minus.push_back(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> h;
        height.push_back(h);
    }
    for (int i = 1; i < height.size(); i++)
    {
        // cout << compute << endl;
        height_minus.push_back(height[i] - height[i-1]);
    }
    for(int j = 0; j < height_minus.size(); j++)
    {
        // cout << height_minus[j] << endl;
        if(height_minus[j] > 0)
        {
            energy.push_back(height_minus[j]+m);
            m++;
        }
        else
        {
            m = 0;
        }
    }
    cout << accumulate(energy.begin(), energy.end(), 0) << endl;
    return 0;
}
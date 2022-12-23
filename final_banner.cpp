#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int width;
    int max=-1;
    int height[100000];
    vector<pair<int,int> > vect;
    
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> height[i];
        vect.push_back(make_pair(height[i], i+1));
    }

    sort(vect.begin(), vect.end());
    for (int j=0; j<n; j++)
    {
        cout << vect[j].first << " " << vect[j+1].first << endl;
        if (vect[j].first == vect[j+1].first)
        {
            width = abs(vect[j].second - vect[j+1].second);
            // cout << width << endl;
            if (max < width){
                max = width;
            }
        }
    }
    cout << max << endl;
    return 0;
}
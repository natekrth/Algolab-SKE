#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int k;
    int width;
    int diff;
    int max=-1;
    int height[100000];
    vector<pair<int,int> > vect;
    
    cin >> n >> k;
    for (int i = 0; i<n; i++)
    {
        cin >> height[i];
        vect.push_back(make_pair(height[i], i+1));
    }

    sort(vect.begin(), vect.end());
    for (int j=0; j<n; j++)
    {
        diff = abs(vect[j].first - vect[j+1].first)
        cout << diff << endl;
        if (vect[j].first == vect[j+1].first && diff < k)
        {
            width = abs(vect[j].second - vect[j+1].second);
            // cout << width << endl;
            if (max < width){
                max = width;
            }
        }
    }
    cout << max << endl;
}

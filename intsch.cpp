#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int s, t;
    int count = 1;
    vector<pair<int, int> > interval;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        interval.push_back( make_pair(t, s) );
    }
    sort(interval.begin(), interval.end());
    int save_max = interval[0].first;
    for (int i = 1; i < n; i++)
    {
        if (interval[i].second >= save_max)
        {
            count++;
            save_max = interval[i].first;
        }
    }
    cout << count << endl;
}
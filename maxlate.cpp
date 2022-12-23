#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int compute;
    int total = 0;
    int late = 0;
    vector<pair<int, int> > vect;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int deadline;
        int time_to_complete;
        cin >> deadline >> time_to_complete;
        vect.push_back( make_pair(deadline, time_to_complete) );
    }
    sort(vect.begin(), vect.end());
    for (int i = 0; i < vect.size(); i++)
    {
        total += vect[i].second;
        compute = total - vect[i].first;
        if((total - vect[i].first > 10)&&(late<(compute-10)))
        {
            late = compute-10;
        }
    }
    cout << late*1000 << endl;
}
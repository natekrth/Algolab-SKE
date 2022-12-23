#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int g;
    int t;
    int count;
    int save[100000];
    vector<pair<long,long> > vect;
    cin >> n >> g >> t;
    for (int i = 0; i<n; i++)
    {
        cin >> save[i];
        for (int j=1; j<i+1; j++)
        {
            vect.push_back(make_pair(save[i], save[j]));
        }
    }
    for (int j=0; j<n; j++)
    {
        int sum = vect[j].first + vect[j].second;
        cout << vect[j].first << " " << vect[j].second <<  endl;
        if ((g-t <= sum) && (sum <= g+t))
        {
            count++;
        }
    }
    cout <<  count << endl;
}
// for (int i = 0; i < n; i++) {
//     int w, c;
//     cin >> w >> c;
//     for (int j = 0; j < i; j++) {
//       int weight_j = papers[j].first;
//       int color_j = papers[j].second;
//       if (w + weight_j == l && c != color_j) {
//         count++;
//       }
//     }
//     papers.push_back(make_pair(w, c));
//   }
//   cout << count;
    // for (int i=0; i<n; i++)
    // {
    //     for (int j=1; j<i+1; j++)
    //     {
    //         int sum = save[i] + save[j];
    //         cout << save[i] << " " << save[j]<<  endl;
    //         if ((g-t < sum) && (sum < g+t))
    //         {
    //             count++;
    //         }
    //     }
    // }
    // for (int i=0; i<n; i++)
    // {
    //     int sum = vect[i].first + vect[i].second;
    //     // cout << sum << endl;
    //     if (sum == g)
    //     {
    //         count++;
    //     }
    // }

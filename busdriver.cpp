#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n=-1; 
    int d=-1;
    int r=-1;
    while((n!=0) && (d!=0) && (r!=0))
    {
        vector<int> morning;
        vector<int> evening;
        int sum=0;
        cin >> n >> d >> r;
        for(int i = 0; i < n; i++)
        {
            int morning_length = 0;
            cin >> morning_length;
            morning.push_back(morning_length);
        }
        for(int i = 0; i < n; i++)
        {
            int evening_length = 0;
            cin >> evening_length;
            evening.push_back(evening_length);
        }
        for(int i = 0; i < n; i++)
        {
            cout << morning[i] << " " << evening[i] << endl;
        }
        // for(int i = 0; i < n; i++)
        // {
        //     cout << eve[i] << endl;
        // }
        // sort(morning.begin(), morning.end());
        // sort(evening.begin(), evening.end(), greater<int>());
        // for (int i = 0; i < n; i++) {
        //     if (morning[i] + evening[i] > d)
        //         sum += (morning[i] + evening[i] - d) * r;
        // }
        // cout << sum << endl;
    }
}
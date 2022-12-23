#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int assign_routes(int n, int d, int r, vector<int> &morning_routes, vector<int> &evening_routes)
{
    sort(morning_routes.begin(), morning_routes.end());
    sort(evening_routes.begin(), evening_routes.end(), greater<int>());

    int overtime = 0;

    for (int i = 0; i < n; i++)
    {
        int total_route_length = morning_routes[i] + evening_routes[i];
        if (total_route_length > d)
        {
            int overtime_hours = total_route_length - d;
            overtime += overtime_hours * r;
        }
    }
    return overtime;
}

int main()
{
    int n=-1; 
    int d=-1;
    int r=-1;
    while((n!=0) && (d!=0) && (r!=0))
    {
        cin >> n >> d >> r;
        if ((n == 0) && (d == 0) && (r == 0))
            break;
        vector<int> morning(n);
        vector<int> evening(n);
        int sum=0;
        for(int i = 0; i < n; i++)
        {
            cin >> morning[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> evening[i];
        }
        cout << assign_routes(n, d, r, morning, evening) << endl;
    }
}

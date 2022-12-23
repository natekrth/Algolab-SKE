#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    int n, m;
    int p;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        vector<int> piority;
        int time = 0;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> p;
            piority.push_back(p);
        }
        sort(piority.begin(), piority.end());
        // for (int k = 0; k < n; k++)
        // {
        //     cout << piority[k] << endl;
        // }
        if (m == 0)
        {
            while((piority.size()-1 != m))
            {
                piority.pop_back();
                // cout << piority.size() << endl;
                time++;
            }
        }
        else
        {
            while((piority.size() != m))
            {
                piority.pop_back();
                time++;
            }
        }
        cout << time << endl;
    }
}
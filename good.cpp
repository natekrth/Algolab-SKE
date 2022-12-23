#include <iostream>

using namespace std;

int main()
{
    int n, s, t;
    int price[100000];
    int count_pair = 0;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int j = 0; j < n; j++)
    {
        for(int k = j+1; k < n; k++)
        {
            if((price[j]+price[k] >= s) && (abs(price[j] - price[k]) <= t))
            {
                count_pair++;
            }
        }
    }
    cout << count_pair << endl;
    return 0;
}
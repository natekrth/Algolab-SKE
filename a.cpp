#include <iostream>

using namespace std;

int main()
{
    int n;
    int s;
    int t;
    int price[1000];
    int count_pair = 0;
    int summa[1000];
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int j = 0; j < n; j++)
    {
        for(int k = j; k < n; k++)
        {
            cout << j << endl;
            cout << k << endl;
            cout << " " << endl;
        }
    }
}

    cout << count_pair << endl;
    return 0;

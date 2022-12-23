#include <iostream>
using namespace std;

int main()
{
    int n;
    int m[100000];
    int save = 1000000000;
    int diff = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n+1; j++)
        {
            diff = abs(m[i] - m[j]);
            if (diff < save)
            {
                save = diff;
            }
        }
    }
    cout << save << endl;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    int count = 0;
    int data[100010] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        data[m]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(data[i] >= 3)
        {
            count++;
        }
    }
    cout << count << endl;
}
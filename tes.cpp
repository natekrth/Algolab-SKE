#include <iostream>
using namespace std;

int largest(int ar[], int n)
{
    int max = ar[0];
    for (int k = 0; k < n; k++)
    {
        if (ar[k] > max)
        {
            max = ar[k];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        int r;
        cin >> c >> r;
    }
}
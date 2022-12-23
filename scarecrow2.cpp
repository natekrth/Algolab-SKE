#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int n;
    char c[500];
    int count = 0;
    int total_scarecrow = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int j = 0;
        cin >> n;
        cin >> c;
        while(j < n)
        {
            if (c[j] == '#')
            {
                j++;
            }
            else if (c[j] == '.')
            {
                total_scarecrow++;
                j += 3;
            }
        }
        cout << "Case " << i + 1 << ": " << total_scarecrow << endl;
        total_scarecrow = 0;
    }
}
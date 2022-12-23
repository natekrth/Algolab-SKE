#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int r, c, n;
    int a, b;
    cin >> r >> c >> n;
    int table[r][c];
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            table[i][j] = 0;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cin >> a >> b;
        table[a][b] = k;
    }
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         table[i][j] = 0;
    //         cout << table[i][j] << endl;
    //     }
    // }
    // count << save[0] << endl;
}
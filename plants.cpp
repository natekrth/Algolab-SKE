#include <iostream>

using namespace std;

int main()
{
    int r, c, n;
    int a, b;
    cin >> r >> c >> n;
    int row[100] = {0};
    int col[100] = {0};
    int count_row = 0;
    int count_col = 0;
    for (int k = 1; k <= n; k++)
    {
        count_row = 0;
        count_col = 0;
        cin >> a >> b;
        row[a] = k;
        col[b] = k;
        
        for (int i = 1; i <= n; i++)
        {
            if (row[k] == row[i])
            {
                count_row++;
            }
            if (col[i] == col[k])
            {
                count_col++;
            } 
        }
        cout << "count_row: " << count_row << " count_col: " << count_col << endl;
    }
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

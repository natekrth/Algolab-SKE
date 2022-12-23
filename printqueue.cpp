#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

// int find_max()
// {
//     int size = sizeof(piority) / sizeof(piority[0]);
//     int max = INT_MIN;
//     int index = -1;
//     for(int i=0;i<size;i++)
//     {
//         if(piority[i]>max)
//         {
//             max = piority[i];
//             index = i;
//         }
//     }
//     return max;
// }
int main()
{
    int num;
    int n, m;
    int piority[100];
    int time = 0;
    int max = 0;
    int index = -1;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        time = 0;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> piority[j];
        }

        // int size = sizeof(piority) / sizeof(piority[0]);
        // for (int i = 0; i < size; i++)
        // {
        //     if (piority[i] > max)
        //     {
        //         max = piority[i];
        //         index = i;
        //     }
        // }
        cout << max(piority) << endl;
    }
}
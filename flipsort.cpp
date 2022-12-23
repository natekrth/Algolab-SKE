#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int min_flip = 0;
    while(cin >> n)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] > a[k])
                {
                    min_flip++;
                }
            }
        }
        cout << "Minimum exchange operations : " << min_flip << endl;
    }
}

// while(true)
// {
//     bool changed = false;
//     for (int j=0; j<n-1; j++)
//     {
//         if(a[j] > a[j+1])
//         {
//             int swap;
//             swap = a[j];
//             a[j] = a[j+1];
//             a[j+1] = swap;
//             min_flip++;
//             changed = true;
//         }
//     }
//     if(!changed)
//     {
//         break;
//     }
// }
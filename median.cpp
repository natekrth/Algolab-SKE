#include <iostream>
#include <string>

using namespace std;

void bubble_sort(int a[], int n)
{
    while(true)
    {
        bool changed = false;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                swap(a[i], a[i+1]);
                // int swap;
                // swap = a[i];
                // a[i] = a[i+1];
                // a[i+1] = swap;
                changed = true;
            }
        }
        if(!changed)
        {
            break;
        }
    }
}

int main()
{
    int i;
    int x[1000];
    int count = 0;
    
    while(cin >> i) {
        bubble_sort(x, count);
        x[count] = i;
        // if (count % 2 == 1) {
        //     cout << x[(count/2)+1] << endl;
        // }
        count++;
        for (int j = 0; j < count; j++)
        {
            cout << " " << x[j];
        }
        cout << endl;
    }
}
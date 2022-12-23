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
    int layer[10] = {0};
    int n;
    int max_tall = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char type;
        int column;
        cin >> type >> column;
        column--;
        if (type == '-')
        {
            int check[] = {layer[column], layer[column + 1], layer[column + 2], layer[column + 3]};
            max_tall = largest(check, 4) + 1;
            layer[column] = max_tall;
            layer[column + 1] = max_tall;
            layer[column + 2] = max_tall;
            layer[column + 3] = max_tall;
        }
        else if (type == 'i')
        {
            layer[column] += 4;
        }
        else if (type == 'o')
        {
            int check[] = {layer[column], layer[column + 1]};
            max_tall = largest(check, 2);
            max_tall += 2;
            layer[column] = max_tall;
            layer[column + 1] = max_tall;
        }
    }
    cout << largest(layer, 10) << endl;
}
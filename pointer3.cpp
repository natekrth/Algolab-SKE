#include <iostream>
using namespace std;

void dosomething(int** a) {
    *a = new int[1000];
}

int main()
{
    int *x = 0;

    dosomething(&x);
    for (int i = 0; i < 100; i++)
    {
        x[i] = i * 2;
    }
    cout << x[1] + x[20] + x[99] << endl;

    delete[] x;
}
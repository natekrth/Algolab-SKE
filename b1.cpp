#include <iostream>

using namespace std;

int main()
{
    int summation = 0;
    int n;
    int m;

    cin >> n;
    cin >> m;
    
    for (int i=n; i<=m; i++) {
        summation = summation + i;
    }

    cout << summation << endl;
}
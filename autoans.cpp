#include <iostream>

using namespace std;

int main()
{
    int t;
    int n[100];
    int result;

    cin >> t;

    for (int i=0; i<t; i++) {
        cin >> n[i];
        n[i] = ((((n[i] * 567)/9 + 7492) * 235) / 47) - 498;
    }
    for (int j=0; j<t; j++) {
        result = (n[j] / 10) % 10;
        cout << abs(result) << endl;
    }
}
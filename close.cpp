#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    int n;
    int l;
    int x[10];
    int count = 0;

    cin >> n >> l;
    for (int i=0; i<n; i++) {
        cin >> x[i];
    }
    for (int j=0; j<n; j++) {
        for (int k=j+1; k<n; k++) {
            if (abs(x[j] - x[k]) <= l) {
                count += 1;
            }
        }
    }
    cout << count << endl;
}
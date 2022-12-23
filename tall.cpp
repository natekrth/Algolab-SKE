#include <iostream>

using namespace std;

int main()
{
    int in;
    cin >> in;
    int n[10];
    int count;
    int counts[10];

    for (int i=0; i<in; i++) {
        cin >> n[i];
    }
    for (int j=0; j<in; j++) {
        count = 0;
        for(int k=0; k<in; k++) {
            if(n[j] < n[k]) {
                count++;
            }
        }
        counts[j] = count;
    }
    for (int m=0; m<in; m++) {
        cout << counts[m] << endl;
    }
}
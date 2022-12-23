#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int a;
    int n, m;
    cin >> a;
    cin >> n >> m;
    string save[m];

    for (int i=0; i<m; i++) {
        cin >> save[i];
        if (save[i+1] < save[i]) {
            save[i] = save[i+1];
        }
        else {
            save[i] = save[i];
        }
        cout << save[0] << endl;
    }
    // for (int l=0; l<m; l++) {
    //     cout << save[l] << endl;
    // }
}
    // string a = "AACATGAAGG";
    // string b = "CCCGGGGGGA";
    // if (a < b) {
    //     cout << a;
    // }
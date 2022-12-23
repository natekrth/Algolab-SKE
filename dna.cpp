#include <iostream>

using namespace std;

int main() 
{
    int a;
    int n, m;
    cin >> a;
    cin >> n >> m;
    int save[10];
    int sum = 0;
    int mul = n*m;
    char st[60];
    for (int i=0; i<mul; i++) {
        sum = 0;
        cin >> st[i];
        if (st[i] == 'A') {
            sum += 1;
        }
        else if (st[i] == 'C')
        {
            sum += 3;
        }
        else if (st[i] == 'G')
        {
            sum += 7;
        }
        else if (st[i] == 'T')
        {
            sum += 20;
        }
        save[i] = sum;
    }
    for (int j=0; j<mul; j++) {
        cout << save[j] << endl;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int x[100];
    int n;
    bool palindrome = false;
    int save = 0;
    cin >> n;

    while (n != 0)
    {
        save = n % 10;
        n /= 10;
        x[count] = save;
        count++;
    }

    for (int j=0; j<count; j++) {
        if(x[j] != x[count-j-1]) {
            palindrome = false;
            break;
        }
        palindrome = true;
    }
    if (palindrome) {
        cout << "yes" << endl;
    }
    else if (count == 0)
    {
        cout << "yes" << endl;
    }
    
    else {
        cout << "no" << endl;
        return 0;
    }
}
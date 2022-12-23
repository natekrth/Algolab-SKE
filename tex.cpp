#include <iostream>

using namespace std;

int main()
{
    string text;
    int count = 0;

    while (getline(cin, text)) {
        for (int i=0; text[i]; i++) {
            if (text[i] == '"') {
                if (count%2==0) {
                    cout << "``";
                }
                else {
                    cout << "''";
                }
                count++;
            }
            else {
                cout << text[i];
            }
        }
        cout <<  endl;
    }
}
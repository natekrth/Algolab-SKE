#include <iostream>
using namespace std;

int count_char(char *st, char c)
{
    int count = 0;
    for (int i=0; i<1000; i++) {
        if (st[i] == '\0') {
            break;
        }
        if (st[i] == c) {
            count++;
        }
    }
    return count;
}
    // return semi;
    // if (c == ' ') {
    //     return space;
    // }
    // if (c == ';') {
    //     return semi;
    // }
    // if (c == '.') {
    //     return dot;
    // }
        // if (st[i] == ';') {
        //     semi++;
        //     return semi;
        // }
        // if (st[i] == '.') {
        //     dot++;
        //     return dot;
    // }
    // if (c == ' ') {
    //     return space;
    // }
    // if (c == ';') {
    //     return semi;
    // }
    // if (c == '.') {
    //     return dot;
    // }

int main()
{
    char st[1000];

    cin.getline(st, 1000);

    cout << "space: " << count_char(st, ' ') << endl;
    cout << "dot: " << count_char(st, '.') << endl;
    cout << "semi: " << count_char(st, ';') << endl;
}
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s[100010];
    map<char, int> mp;
    char c;
    int cnt = 0;
    while (cin >> s[cnt++])
        if (s[cnt - 1] == "#")
            break;

    for (int i = 0; i < 20; i++)
        for (int j = 0; j < cnt - 1; j++)
            if (i < s[j].length())
            {
                c = s[j][i];
                if (mp[c] != 1)
                {
                    cout << c;
                    mp[c] = 1;
                }
            }
    cout << endl;

    return 0;
}
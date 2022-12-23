#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string str[100010];
    map<char, int> charmap;
    char c;
    int count = 0;
    int count2 = 0;
    while (true)
    {
        cin >> str[count++];
        count2++;
        if (str[count - 1] == "#")
            break;
    }
    for (int i = 0; i < count2; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (i < str[j].length())
            {
                c = str[j][i];
                if (charmap[c] != 1)
                {
                    cout << c;
                    charmap[c] = 1;
                }
            }
        }
    }
    cout << endl;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    int n = 1;
    while(true)
    {
        string str;
        cin >> n >> str;
        if(n == 0)
        {
            break;
        }
        for (int i = 0; i < str.length(); i+=round(str.size() / n))
        {
            string group = str.substr(i, round(str.size() / n));
            reverse(group.begin(), group.end());
            cout << group;
        }
        cout << endl;
    }
}

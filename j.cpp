#include <vector>
#include <iostream>
#include <list>
#include <set>

using namespace std;

int main()
{
    set<pair<int,int>> s;

    s.insert(make_pair(1,1));
    s.insert(make_pair(1,3));
    s.insert(make_pair(3,1));
    s.insert(make_pair(3,3));

    for (pair<int,int>::iterator i = s.begin(); i != s.end(); i++)
    {
        cout << i << endl;
    }
}
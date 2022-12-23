#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Demand
{
    int start;
    int end;
};

bool compare(Demand a, Demand b)
{
    if (a.end == b.end)
    {
        return a.start < b.start;
    }
    return a.end < b.end;
}

int main()
{
    int n, m;
    int max_end = 0;
    int count = 0;
    cin >> n >> m;

    Demand demand[m];
    for (int i = 0; i < m; i++)
    {
        cin >> demand[i].start >> demand[i].end;
    }
    sort(demand, demand + m, compare);
    for (int i = 0; i < m; i++)
    {
        if (demand[i].start >= max_end)
        {
            max_end = demand[i].end;
            count++;
        }
    }
    cout << count << endl;
}

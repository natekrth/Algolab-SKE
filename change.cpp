#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    int result = 0;
    vector<int> box;
    int green, black;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> green >> black;
        int money = green - black;
        box.push_back(money);
    }
    sort(box.begin(), box.end());
    for (int i = 0; i < n; i++)
    {
        if ((box[i] < 0) && (i < k))
        {
            continue;
        }
        else
        {
            result += box[i];
        }
    }
    cout << result << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        int catalog;
        int count;
        int value;
        vector<int> save;
        vector<int> result;
        int n, m;
        cin >> n >> m;
        if ((n == 0) && (m == 0))
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> catalog;
            save.push_back(catalog);
        }
        for (int k = 0; k < m; k++)
        {
            cin >> catalog;
            save.push_back(catalog);
        }
        sort(save.begin(), save.end());
        for (int i = 0; i < save.size(); i++)
        {
            if (save[i] == save[i + 1])
            {
                count++;
                value = save[i];
                result.push_back(value);
            }
        }
        count++; // for last element
        cout << result.size() << endl;
    }
}
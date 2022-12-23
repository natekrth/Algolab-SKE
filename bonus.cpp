#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int index = 0;
    vector<int> points;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        points.push_back(0);
    }
    for(int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            index = 0;
        }
        else if(t == 1)
        {
            index++;
        }
        else if(t == 2)
        {
            points.insert(points.begin()+index+1, 0);
        }
        else if(t == 3)
        {
            int x;
            cin >> x;
            points[index] += x;
        }
    }
    for (int j = 0; j < points.size(); j++)
    {
        cout << points[j] << " ";
    }
    cout << endl;
}

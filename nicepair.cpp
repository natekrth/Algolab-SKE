#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, l;
    int count = 0;
    vector<pair<int ,int> > paper;
    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        int w, c;
        cin >> w >> c;
        paper.push_back( make_pair(c, w) );
    }
    sort(paper.begin(), paper.end());
    for (int j = 0; j < paper.size(); j++)
    {
        for (int k = j+1; k < paper.size(); k++)
        {
            if((paper[j].first != paper[k].first) && ((paper[j].second + paper[k].second) == l))
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
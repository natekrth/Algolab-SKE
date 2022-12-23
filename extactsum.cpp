#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    int n;
    while(cin >> n)
    {
        int m;
        int total = 0;
        int min = 1000010;
        int ans1;
        int ans2;
        vector<pair<int,int> > save;
        vector<int> vect;
        for(int i = 0; i < n; i++)
        {
            int book;
            cin >> book;
            vect.push_back(book);
        }
        cin >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                total = vect[i] + vect[j];
                if(total == m)
                {
                    save.push_back( make_pair(vect[i], vect[j]) );
                }
            }
        }
        for(int i = 0; i < save.size(); i++)
        {
            int compute = abs(save[i].first-save[i].second);
            if (compute < min)
            {
                min = compute;
                ans1 = save[i].first;
                ans2 = save[i].second;
            }
        }
        if (ans1 < ans2)
        {
            cout << "Peter should buy books whose prices are " << ans1 << " and " << ans2 << "." << endl;
        }
        else
        {
            cout << "Peter should buy books whose prices are " << ans2 << " and " << ans1 << "." << endl;
        }
        cout << endl;
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Data
{
    int server;
    int server2;
    int latency;
};

int main()
{
    int a;
    cin >> a;
    for(int i = 1; i<a+1; i++)
    {
        Data email[100000];
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        int save;
        if(m==0)
        {
            cout << "Case #" << i << ": " << "unreachable" << endl;
            a++;
        }
        for(int j = 0; j < m; j++)
        {
            cin >> email[j].server >> email[j].server2 >> email[j].latency;
        }
        for(int j = 0; j < m; j++)
        {
            cout << email[j].server << endl;
        }
        save = s;
        while(save != t)
        {
            
        }
        a++;
    }
}
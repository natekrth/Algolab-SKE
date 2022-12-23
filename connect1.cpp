#include <list>
#include <iostream>

using namespace std;

const int MAX_N = 100000;

int n, m;
list<int> adj[MAX_N];
int deg[MAX_N];

void read_input()
{
    cin >> n >> m;
    for (int u = 0; u < n; u++)
    {
        deg[u] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        adj[u].push_back(v);
        deg[u]++;
        adj[v].push_back(u);
        deg[v]++;
    }
}

int main()
{
    read_input();
    return 0;

}
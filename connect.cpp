#include <vector>
#include <iostream>
#include <list>

using namespace std;

const int MAX_N = 100000;

int n, m;
vector<int> adj[MAX_N];
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

int layer[MAX_N];
bool seen[MAX_N];

void init_bfs()
{
    for(int u = 0; u < n; u++)
    {
        layer[u] = -1;
        seen[u] = false;
    }
}

void bfs(int s)
{
    vector<int> current_layer;
    vector<int> next_layer;

    current_layer.push_back(s);
    layer[s] = 0;
    seen[s] = true;

    while(true)
    {
        for (vector<int>::iterator i = current_layer.begin(); i != current_layer.end(); i++)
        {
            int u = *i;
            // cout << "visit: " << u << "layer: " << layer[u] << endl;
            for(int d = 0; d < deg[u]; d++)
            {
                int v = adj[u][d];
                if(!seen[v])
                {
                    next_layer.push_back(v);
                    seen[v] = true;
                    layer[v] = layer[u] + 1;
                }
            }
        }
        if (next_layer.size() == 0)
        {
            break;
        }

        current_layer = next_layer;
        next_layer.clear();
        // cout << seen[0] << endl;
    }
}

void count_component()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << count << endl;
        cout << "seen: "<< seen[i] << "layer: " << layer[i] << endl;
        if (!(seen[i]))
        {
            bfs(i);
            count++;
        }
    }
    cout << count << endl;
}


int main()
{
    int count = 0;
    read_input();
    init_bfs();
    count_component();
    return 0;
}
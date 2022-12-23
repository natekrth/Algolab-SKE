#include <vector>
#include <iostream>
#include <list>
#include <utility>
#include <cmath>

using namespace std;

const int MAX_N = 100000;

int n, r;
vector<int> adj[MAX_N];
int deg[MAX_N];

int layer[MAX_N];
bool seen[MAX_N];

void bfs(int s)
{
    vector<int> current_layer;
    vector<int> next_layer;

    current_layer.push_back(s);
    seen[s] = true;
    layer[s] = 0;

    while (true)
    {
        for (vector<int>:: iterator i = current_layer.begin(); i != current_layer.end(); i++)
        {
            int u = *i;
            for (int d = 0; d < deg[u]; d++)
            {
                int v = adj[u][d];
                if (!seen[v])
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
        else if (next_layer.size() >= 1)
        {
            current_layer.erase(current_layer.begin());
        }

        current_layer = next_layer;
        next_layer.clear();
    }
}


void init_bfs()
{
    for (int u = 0; u < n; u++)
    {
        layer[u] = -1;
        seen[u] = false;
    }
}

int main()
{
    cin >> n >> r;
    init_bfs();
    pair<int, int> coor[n];
    // set coordinate at the top (0, 0)
    coor[0].first = 0;
    coor[0].second = 0;
    for (int u = 0; u < n; u++)
    {
        deg[u] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        int x, y;
        cin >> x >> y;
        coor[i].first = x;
        coor[i].second = y;
    }
    // set coordinate at (100, 100)
    coor[n + 1].first = 100;
    coor[n + 1].second = 100;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = i + 1; j < n + 2; j++)
        {
            int x1 = coor[i].first;
            int y1 = coor[i].second;
            int x2 = coor[j].first;
            int y2 = coor[j].second;
            // cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
            int distance_x = x2 - x1;
            int distance_y = y2 - y1;
            int distance = pow(distance_x, 2) + pow(distance_y, 2);
            // cout << sqrt(distance) << endl;
            if (sqrt(distance) <= r)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
                deg[i]++;
                deg[j]++;
            }
        }
    }
    bfs(0);
    if (layer[n + 1] != 0)
    {
        cout << layer[n + 1] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
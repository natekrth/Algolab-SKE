

#include <iostream>
#include <string>
#include <utility>
#include <list>
#include <vector>

using namespace std;

const int MAX_N = 100000;

int layer[MAX_N];
bool seen[MAX_N];

int n, r;
vector<int> adj[MAX_N];
int deg[MAX_N];

void init_bfs()
{
    for (int u = 0; u < n; u++) {
        layer[u] = -1;
        seen[u] = false;
    }
}

void bfs(int s)
{
    vector<int> current_layer;

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
                    current_layer.push_back(v);
                    seen[v] = true;
                    layer[v] = layer[u] + 1;
                }
            }
        }
        // check if empty
        if (current_layer.size() == 0)
        {
            break;
        }
        else if(current_layer.size() >= 1)
        {
            current_layer.erase(current_layer.begin());
        }
        current_layer.clear();
    }
}


int main() {
    cin >> n >> r;
    pair<int, int> coor[n];
    coor[0] = make_pair(0, 0);
    for (int i = 1; i < n+1; i++) {
        int x, y;
        cin >> x >> y;
        coor[i] = make_pair(x, y);
    }
    coor[n+1] = make_pair(100, 100);
    for (int i = 0; i < n+1; i++) {
        for (int j = i+1; j < n+2; j++) {
            int x1 = coor[i].first;
            int y1 = coor[i].second;
            int x2 = coor[j].first;
            int y2 = coor[j].second;
            int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
            if (dist <= r*r) {
                adj[i].push_back(j);
                adj[j].push_back(i);
                deg[i]++;
                deg[j]++;
            }
        }
    }

    bfs(0);

    if (layer[n+1] != 0) {
        cout << layer[n+1] << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;
}
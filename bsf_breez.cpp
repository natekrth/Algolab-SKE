#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> adj[3010];
queue<int> q;
int deg[3010];

void read_input()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        deg[i] = i;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}


void bfs()
{
    bool visit[3010];
    for (int i = 0; i < n; i++)
        visit[i] = false;

    q.push(deg[0]);
    while (!(q.empty())) {
        int v = q.front();
        q.pop();
        if (visit[v] == true) {continue;}

        cout << v+1 << " ";
        visit[v] = true;

        for (int i = 0; i < adj[v].size(); i++) {
            q.push(adj[v][i]);
        }
    }
}


int main()
{
    read_input();
    bfs();
}
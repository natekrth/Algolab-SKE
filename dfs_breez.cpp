#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, m;
vector<int> adj[3010];
stack<int> stacknumber;
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


void dfs()
{
    bool visit[3010];
    for (int i = 0; i < n; i++)
        visit[i] = false;

    stacknumber.push(deg[0]);
    while (!(stacknumber.empty())) {
        int v = stacknumber.top();
        stacknumber.pop();
        if (visit[v] == true) {continue;}

        cout << v+1 << " ";
        visit[v] = true;

        for (int i = 0; i < adj[v].size(); i++) {
            stacknumber.push(adj[v][i]);
        }
    }
}


int main()
{
    read_input();
    dfs();
}
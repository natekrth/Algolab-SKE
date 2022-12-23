#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int MAX_N = 100010;

int n, m;
int min_baht;
int total = 0;
vector<int> adj[MAX_N];
stack<int> stacks;
int deg[MAX_N];
vector<int> height[MAX_N];

void read_input()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        deg[i] = i;

    for (int i = 0; i < m; i++)
    {
        int a, b, h;
        cin >> a >> b >> h;
        a--;
        b--;

        adj[a].push_back(b);
        adj[b].push_back(a);
        height[a].push_back(h);
        height[b].push_back(h);
        deg[a]++;
        deg[b]++;
    }
}

int dfs(int s, int t, int c)
{
    bool visit[MAX_N];
    for (int i = 0; i < n; i++)
        visit[i] = false;

    stacks.push(s);
    visit[s] = true;

    while (!(stacks.empty()))
    {
        int u = stacks.top();
        stacks.pop();

        for (int d = 0; d < deg[u]; d++)
        {
            int v = adj[u][d];
            int height_now = height[u][d];
            // cout << "n: " << v+1 << endl;
            if (visit[v] == true)
            {
                continue;
            }
            if (!visit[v] and c <= height_now)
            {
                visit[v] = true;
                total++;
                // cout << total << endl;
                stacks.push(v);
            }
            // else
            // {
            //     total = -1;
            // }
        }

        // for (int i = 0; i < v.size(); i++) {
        //     stacknumber.push(v);
        // }
    //   ÷
    }
    if (visit[t])
    {
        cout << total << endl;
    }
    return total;
}

int main()
{
    read_input();
    int s, t, c;
    int result;
    cin >> s >> t >> c;
    // s--;
    // t--;
    result = dfs(s, t, c);
    cout << result << endl;
}
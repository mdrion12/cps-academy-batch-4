#include <bits/stdc++.h>

using namespace std;

#define N 200005

int n, m;
vector<int> adj[N];
int visited[N];
int color[N];
bool is_possible = true;

void dfs(int u, int c)
{
    if (visited[u])
    {
        if (color[u] == c)
            return;
        else
        {
            is_possible = false;
            return;
        }
    }

    visited[u] = 1;
    color[u] = c;

    for (int v : adj[u])
    {
        dfs(v, 3 - c);
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i, 1);
    }

    if (is_possible == false)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << color[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

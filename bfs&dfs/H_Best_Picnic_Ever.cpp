#include <bits/stdc++.h>
using namespace std;
#define ll long long

int vis[1001];

void dfs(int node, vector<int> adj[], vector<bool>& visited)
{
    visited[node] = true;
    vis[node]++;
    for (int next : adj[node])
    {
        if (!visited[next])
        {
            dfs(next, adj, visited);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int k, n, m;
        cin >> k >> n >> m;

        memset(vis, 0, sizeof(vis));

        vector<int> start(k);
        for (int i = 0; i < k; i++)
        {
            cin >> start[i];
        }

        vector<int> adj[n + 1];
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        for (int i = 0; i < k; i++)
        {
            vector<bool> visited(n + 1, false);
            dfs(start[i], adj, visited);
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == k)
                count++;
        }

        cout << "Case " << tc << ": " << count << "\n";
    }

    return 0;
}

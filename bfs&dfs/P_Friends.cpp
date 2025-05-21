#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int vis[300001];
int dfs(int a, vector<int> adj[])
{
    vis[a] = 1;
    int res = 1;
    for (auto it : adj[a])
    {
        if (!vis[it])
        {
            res += dfs(it, adj);
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> adj[n + 1];
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        memset(vis, 0, sizeof(vis));
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                int v = dfs(i, adj);
                ans = max(ans, v);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
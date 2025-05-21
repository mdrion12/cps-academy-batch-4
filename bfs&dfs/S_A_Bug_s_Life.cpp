#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
bool dfs(int a, int p, int clr, vector<int> adj[], vector<int> &color, vector<int> &visit)
{

    if (visit[a])
    {
        if (color[a] != clr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    visit[a] = 1;
    color[a] = clr;
    for (auto it : adj[a])
    {
        if (it != p)
        {
            if (dfs(it, a, 3 - clr, adj, color, visit))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> adj[n + 1];
        vector<int> color(n + 1, -1);
        vector<int> visit(n + 1, 0);

        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool f = false;
        for (int i = 1; i <= n; i++)
        {
            if (!visit[i])
            {
                if (dfs(i, 0, 1, adj, color, visit))
                {
                    f = true;
                }
            }
        }
        if (f)
        {
            cout << "Scenario #" << i << ":\n"
                 << "Suspicious bugs found!" << "\n";
        }
        else
        {
            cout << "Scenario #" << i << ":\n"
                 << "No suspicious bugs found! " << "\n ";
        }
    }

    return 0;
}
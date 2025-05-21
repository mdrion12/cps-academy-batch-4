#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
void dfs(int a, int p, int clr, vector<int> adj[], vector<int> &color, vector<int> &visit, vector<int> &clr1, vector<int> &clr0)
{
    if (visit[a])
    {
        return;
    }
    if (clr == 0)
    {
        clr0.push_back(a);
    }
    else
    {
        clr1.push_back(a);
    }
    visit[a] = 1;
    color[a] = clr;
    for (auto it : adj[a])
    {
        if (it != p)
        {
            dfs(it, a, 3 - clr, adj, color, visit, clr1, clr0);
        }
    }
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
        vector<int> color(n + 1, -1);
        vector<int> clr1, clr0;
        vector<int> visit(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1, 0, adj, color, visit, clr1, clr0);
        if (clr0.size() <= n / 2)
        {
            cout << clr0.size() << "\n";
            for (auto it : clr0)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << clr1.size() << "\n";
            for (auto it : clr1)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
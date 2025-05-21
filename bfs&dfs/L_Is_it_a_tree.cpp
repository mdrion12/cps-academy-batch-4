#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 10009;
vector<int> adj[N];
bool found = false;
int vis[N];
void dfs(int a, int p)
{
    if (vis[a])
    {
        found = true;
        return;
    }
    vis[a] = 1;
    for (auto child : adj[a])
    {
        if (child != p)
        {
            dfs(child, a);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            found = true;
        }
    }
    if (found)
    {
        no
    }
    else
    {
        yes
    }
    return 0;
}
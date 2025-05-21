#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int sz = 1e5 + 1;
int n, m;
vector<int> parent(sz);
vector<int> vis(sz);
void initialize()
{
    for (int i = 0; i <= n; i++)
    {
        parent[i] = -1;
        vis[i] = 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    initialize();

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    parent[1] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (auto child : adj[par])
        {
            if (!vis[child])
            {
                q.push(child);
                parent[child] = par;
                vis[child] = 1;
            }
        }
    }
    vector<int> ans;
    if (!vis[n])
    {
        cout << "IMPOSSIBLE" << "\n";
    }
    else
    {
        int curr = n;
        while (curr != 0)
        {
            ans.push_back(curr);
            curr = parent[curr];
        }
        cout << ans.size() << "\n";
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 1e5 + 1;
int vis[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans.push_back(i);
            vis[i] = 1;
            queue<int> q;
            q.push(i);
            while (!q.empty())
            {
                int p = q.front();
                q.pop();
                vis[p] = 1;
                for (auto ch : adj[p])
                {
                    if (!vis[ch])
                    {
                        q.push(ch);
                    }
                }
            }
        }
    }
    cout << ans.size() - 1 << "\n";
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " " << ans[i + 1] << "\n";
    }

    return 0;
}
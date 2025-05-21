#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 2e5 + 10;
vector<int> adj[N];
int level[N];
void dfs(int a, int p)
{
    for (auto child : adj[a])
    {
        if (child != p)
        {
            level[child] = level[a] + 1;
            dfs(child, a);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    level[1] = 0;
    dfs(1, 0);
    int maxlevel = 0;
    int index = 1;
    for (int i = 1; i <= n; i++)
    {
        if (maxlevel < level[i])
        {
            maxlevel = level[i];
            index = i;
        }
    }
    level[index] = 0;
    dfs(index, 0);
    int res = -1;
    for (int i = 1; i <= n; i++)
    {
        res = max(res, level[i]);
    }
    cout << res << "\n";

    return 0;
}
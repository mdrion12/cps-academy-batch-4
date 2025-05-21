#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 2e5 + 10;
vector<int> adj[N];
vector<int> level(N);
void dfs(int a, int p)
{
    for (auto it : adj[a])
    {
        if (it != p)
        {
            level[it] = level[a] + 1;
            dfs(it, a);
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
    vector<int> ans(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int first = 0, second = 0;
    level[1] = 0;
    dfs(1, 0);
    int mx = -1;
    int mxval = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mx < level[i])
        {
            mx = level[i];
            mxval = i;
        }
    }
    first = mxval;
    level[mxval] = 0;
    dfs(mxval, 0);
    mx = -1;
    mxval = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mx < level[i])
        {
            mx = level[i];
            mxval = i;
        }
    }
    second = mxval;
    level[first] = 0;
    dfs(first, 0);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = level[i];
    }
    level[second] = 0;
    dfs(second, 0);

    for (int i = 1; i <= n; i++)
    {
        ans[i] = max(ans[i], level[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
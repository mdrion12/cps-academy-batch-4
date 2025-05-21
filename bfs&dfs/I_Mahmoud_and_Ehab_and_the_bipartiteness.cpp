#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const ll N = 1e5 + 1;
ll level[N];
vector<ll> adj[N];
void dfs(ll a, ll p)
{
    for (auto child : adj[a])
    {
        if (child != p)
        {
            if (level[a] == 1)
            {
                level[child] = 0;
            }
            else
            {
                level[child] = 1;
            }
            dfs(child, a);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    memset(level, -1, sizeof(level));
    for (ll i = 1; i <= n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    level[1] = 0;
    dfs(1, 0);
    ll red = 0, black = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (level[i] == 0)
        {
            red++;
        }
        else
        {
            black++;
        }
    }

    ll res = red * black;
    cout << res - (n - 1) << "\n";
    return 0;
}
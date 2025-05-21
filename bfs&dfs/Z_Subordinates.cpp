#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

void dfs(int a, int p, vector<int> &subtree, vector<int> adj[])
{
    subtree[a] = 1;
    for (auto it : adj[a])
    {
        if (it != p)
        {
            dfs(it, a, subtree, adj);
            subtree[a] += subtree[it];
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
    vector<int> adj[n + 1];
    vector<int> subtree(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int c;
        cin >> c;
        adj[c].push_back(i);
    }
    dfs(1, 0, subtree, adj);
    for (int i = 1; i <= n; i++)
    {
        cout << subtree[i] - 1 << " ";
    }
    cout << "\n";
    return 0;
}
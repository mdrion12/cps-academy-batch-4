#include <bits/stdc++.h>
using namespace std;

void dfs(int a, int p, vector<int>adj[],
 string &s, vector<int> &black, vector<int> &white)
{
    if (s[a - 1] == 'B')
        black[a] = 1;
    else
        white[a] = 1;

    for (auto it : adj[a])
    {
        if (it != p)
        {
            dfs(it, a, adj, s, black, white);
            black[a] += black[it];
            white[a] += white[it];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 2; i <= n; i++)
        {
            cin >> a[i];
        }

        string s;
        cin >> s;

        vector<int> adj[n + 1];
        for (int i = 2; i <= n; i++)
        {
            adj[i].push_back(a[i]);
            adj[a[i]].push_back(i);
        }

        vector<int> black(n + 1, 0), white(n + 1, 0);
        dfs(1, 0, adj, s, black, white);
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (black[i] == white[i])
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}

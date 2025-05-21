#include <bits/stdc++.h>
using namespace std;

int bfs(int start, vector<int> adj[], int n)
{
    vector<int> level(n + 1, -1);
    queue<int> q;
    level[start] = 0;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int child : adj[node])
        {
            if (level[child] == -1)
            {
                level[child] = level[node] + 1;
                q.push(child);
            }

            else if (child == start)
            {
                return level[node] + 1;
            }
        }
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> adj[n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
                adj[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int res = bfs(i, adj, n);
        if (res != -1)
            cout << res << "\n";
        else
            cout << "NO WAY\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 101;
int level[N + 1];
int vis[N + 1];

void initialize()
{
    for (int i = 0; i <= N; i++)
    {
        level[i] = -1;
        vis[i] = -1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v[n + 1];
    for (int i = 0; i < n; i++)
    {
        int node, k;
        cin >> node >> k;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v[node].push_back(x);
        }
    }

    initialize();
    vis[1] = 1;
    level[1] = 0;
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (vis[child] == -1)
            {
                q.push(child);
                level[child] = level[par] + 1;
                vis[child] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << level[i] << "\n";
    }

    return 0;
}

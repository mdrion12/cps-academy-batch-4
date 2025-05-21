#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int vis[n][m];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<pair<int, int>> v = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && vis[i][j] == 0)
            {
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = 1;
                while (!q.empty())
                {
                    pair<int, int> p = q.front();
                    q.pop();
                    for (auto it : v)
                    {
                        int x = it.first + p.first;
                        int y = it.second + p.second;
                        if (x >= 0 && x < n && y >= 0 && y < m && vis[x][y] == 0 && a[x][y] == '.')
                        {
                            q.push({x, y});
                            vis[x][y] = 1;
                        }
                    }
                }
                count++;
            }
        }
    }
    cout << count << "\n";

    return 0;
}
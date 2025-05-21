#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int n, m;
bool vis[100][100];
vector<char> v[100];
bool valid(int x, int y)
{
    if (x >= 0 && x < m && y >= 0 && y < n && vis[x][y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
void dfs(int a, int b)
{
    vis[a][b] = 1;

    for (auto it : dir)
    {
        pair<int, int> child = it;
        int x = it.first;
        int y = it.second;
        int nx = a + x;
        int ny = b + y;
        if (valid(nx, ny) && v[nx][ny] != '#')
        {
            dfs(nx, ny);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        cin >> n >> m;
        for (int i = 0; i < 100; i++)
        {
            v[i].clear();
        }
        memset(vis, 0, sizeof(vis));

        int a1 = 0, b1 = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                v[i].push_back(c);
                if (c == '@')
                {
                    a1 = i;
                    b1 = j;
                }
            }
        }
        dfs(a1, b1);
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vis[i][j] == 1)
                {
                    count++;
                }
            }
        }
        cout << "Case " << tc << ": " << count << "\n";
    }
    return 0;
}
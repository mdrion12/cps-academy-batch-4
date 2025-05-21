#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int n, m;
char a[1001][1001];
int vis[1001][1001];
int dir[1001][1001];
int dis[1001][1001];
string s;

void collect(int bi, int bj)
{
    if (vis[bi][bj] == 0)
    {
        return;
    }
    if (dir[bi][bj] == 0)
    {
        s += "R";
        collect(bi, bj - 1);
    }
    else if (dir[bi][bj] == 1)
    {
        s += "L";
        collect(bi, bj + 1);
    }
    else if (dir[bi][bj] == 2)
    {
        s += "U";
        collect(bi + 1, bj);
    }
    else if (dir[bi][bj] == 3)
    {
        s += "D";
        collect(bi - 1, bj);
    }
}
bool valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m && (a[i][j] == '.' || a[i][j] == 'B') && vis[i][j] == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    memset(vis, 0, sizeof(vis));
    memset(dir, -1, sizeof(dir));
    memset(dis, -1, sizeof(dis));
    int ai = 0, aj = 0, bi = 0, bj = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                ai = i;
                aj = j;
            }
            if (a[i][j] == 'B')
            {
                bi = i;
                bj = j;
            }
        }
    }
    vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    pair<int, int> p = {ai, aj};
    vis[ai][aj] = 1;
    queue<pair<int, int>> q;
    dis[ai][aj] = 0;
    q.push(p);
    while (!q.empty())
    {
        pair<int, int> child = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x = child.first + v[i].first;
            int y = child.second + v[i].second;
            if (valid(x, y))
            {
                vis[x][y] = 1;
                dir[x][y] = i;
                dis[x][y] = dis[child.first][child.second] + 1;
                q.push({x, y});
            }
        }
    }
    collect(bi, bj);
    reverse(s.begin(), s.end());
    if (vis[bi][bj] == 1)
    {
        yes
                cout
            << dis[bi][bj] << "\n";
        cout << s << "\n";
    }
    else
    {
        no
    }

    return 0;
}
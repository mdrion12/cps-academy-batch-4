#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
bool vis[1001][1001];
char v[1001][1001];
int dis[1001][1001];
int dir[1001][1001];
vector<pair<int, int>> mv = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || v[i][j] == '#' || vis[i][j])
    {
        return false;
    }
    return true;
}
string s;
void getpath(int bi, int bj)
{
    if (dis[bi][bj] == 0)
    {
        return;
    }
    if (dir[bi][bj] == 0)
    {
        s += "R";
        getpath(bi, bj - 1);
    }
    else if (dir[bi][bj] == 1)
    {
        s += "L";
        getpath(bi, bj + 1);
    }
    else if (dir[bi][bj] == 2)
    {
        s += "U";
        getpath(bi + 1, bj);
    }
    else if (dir[bi][bj] == 3)
    {
        s += "D";
        getpath(bi - 1, bj);
    }
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = a + mv[i].first;
            int cj = b + mv[i].second;

            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                dir[ci][cj] = i;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    pair<int, int> A, B;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 'A')
            {
                A = {i, j};
            }
            if (v[i][j] == 'B')
            {
                B = {i, j};
            }
        }
    }

    bfs(A.first, A.second);
    getpath(B.first, B.second);
    reverse(s.begin(), s.end());
    if (vis[B.first][B.second] == true)
    {
        cout << "YES" << "\n";
        cout << dis[B.first][B.second] << "\n";
        cout << s << "\n";
    }

    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}

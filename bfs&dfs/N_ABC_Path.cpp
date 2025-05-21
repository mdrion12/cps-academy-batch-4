#include <bits/stdc++.h>
using namespace std;

char arr[51][51];
int dp[51][51];
int n, m;

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

vector<pair<int, int>> dir = {
    {1, 0}, {-1, 0}, {0, -1}, {0, 1}, {-1, 1}, {-1, -1}, {1, 1}, {1, -1}};

int dfs(int x, int y)
{
    if (dp[x][y] != -1)
        return dp[x][y];

    int res = 1;
    for (auto it : dir)
    {
        int nx = x + it.first;
        int ny = y + it.second;
        if (valid(nx, ny) && arr[nx][ny] == arr[x][y] + 1)
        {
            res = max(res, 1 + dfs(nx, ny));
        }
    }

    return dp[x][y] = res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int case_num = 1;
    while (cin >> n >> m && (n || m))
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        memset(dp, -1, sizeof(dp));
        int maxlen = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 'A')
                {
                    maxlen = max(maxlen, dfs(i, j));
                }
            }
        }

        cout << "Case " << case_num++ << ": " << maxlen << "\n";
    }

    return 0;
}

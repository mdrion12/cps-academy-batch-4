#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int a, b;
char arr[1001][1001];
int dp[1001][1001];
vector<pair<int, int>> v = {{0, 1}, {1, 0}};
bool valid(int x, int y)
{
    return (x >= 0 && x < a && y >= 0 && y < b);
}

int fn(int x, int y)
{
    if (x == a - 1 && y == b - 1)
    {
        return 1;
    }
    if (dp[x][y] != -1)
    {
        return dp[x][y];
    }
    int count = 0;
    for (auto it : v)
    {
        int ci = x + it.first;
        int cj = y + it.second;
        if (valid(ci, cj) && arr[ci][cj] != '#')
        {
            count += fn(ci, cj);
            count %= mod;
        }
    }
    return dp[x][y] = count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout << fn(0, 0) << "\n";

    return 0;
}
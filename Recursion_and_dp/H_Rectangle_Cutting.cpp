#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dp[501][501];
int fn(int a, int b)
{
    if (a == b)
        return 0;
    if (dp[a][b] > -1)
        return dp[a][b];
    int ans = 1e9;
    for (int i = 1; i <= a / 2; i++)
    {
        int l = i;
        int r = a - i;
        int temp = fn(l, b) + fn(r, b) + 1;
        ans = min(ans, temp);
    }
    for (int i = 1; i <= b / 2; i++)
    {
        int l = i;
        int r = b - i;
        int temp = fn(a, l) + fn(a, r) + 1;
        ans = min(ans, temp);
    }
    return dp[a][b] = ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    int res = fn(a, b);
    cout << res << "\n";

    return 0;
}
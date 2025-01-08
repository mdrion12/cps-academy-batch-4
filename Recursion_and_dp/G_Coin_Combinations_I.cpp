#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int arr[101];
int dp[1000001];
int fn(int b, int a)
{
    if (b < 0)
    {
        return 0;
    }
    if (b == 0)
    {
        return 1;
    }
    ll sum = 0;
    if (dp[b] != -1)
    {
        return dp[b];
    }
    for (int i = 0; i < a; i++)
    {
        sum += fn(b - arr[i], a);
        sum %= mod;
    }
    return dp[b] = sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    int value = fn(b, a);
    cout << value << "\n";

    return 0;
}
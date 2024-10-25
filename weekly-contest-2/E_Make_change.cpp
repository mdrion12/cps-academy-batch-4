
#include <bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<long, long> dp;
long solve(long n)
{

    if (dp.find(n) != dp.end())
        return dp[n];

    if (n >= 12)
        dp[n] = solve(n / 2) + solve(n / 3) + solve(n / 4);
    else
        dp[n] = n;

    return dp[n];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    while (cin >> n)
        cout << solve(n) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
vector<int> divisors(int n)
{
    vector<int> divisor;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (i != n / i)
            {
                divisor.push_back(n / i);
            }
        }
    }
    return divisor;
}
bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
        }
        int ans = 0;

        // for (int i = 1; i < n; i++)
        // {
        //     if (v[i - 1] < v[i] && v[i] - v[i - 1] > 1)
        //     {
        //         ans += v[i] - v[i - 1] - 1;
        //     }
        // }
        if (mx - mn - 1 <= 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << mx - mn - 1 << "\n";
        }
        // cout << ans << "\n";
    }

    return 0;
}
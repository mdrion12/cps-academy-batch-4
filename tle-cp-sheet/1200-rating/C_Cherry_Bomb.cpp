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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        ll mx = LLONG_MIN, mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool f = true;
        ll sum = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0 && b[i] >= 0)
            {
                if (sum == -1)
                {
                    sum = a[i] + b[i];
                }
                else
                {
                    if (sum == a[i] + b[i])
                    {
                        continue;
                    }
                    else
                    {
                        f = false;
                        break;
                    }
                }
            }
        }
        if (!f)
        {
            cout << 0 << "\n";
        }
        else if (sum >= 0)
        {
            if (mx + m >= sum && mn + m >= sum && mx <= sum)
            {
                cout << 1 << "\n";
            }
            else
                cout << 0 << "\n";
        }
        else
        {
            if (mn + m < m)
            {
                cout << 0 << "\n";
            }
            else
            {
                ll ans = (mn + m) - mx + 1;
                cout << ans << "\n";
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll n, k;
        cin >> n >> k;
        ll lastindex = k + (n - 1);
        ll totalvalue = (n * (k + lastindex)) / 2;
        ll l = 1, r = n;
        ll ans = LLONG_MAX;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll firsttomod = (mid * (k + k + mid - 1)) / 2;
            ll value = totalvalue - firsttomod;
            ll rem = abs(firsttomod - value);
            ans = min(ans, rem);
            if (firsttomod > value)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

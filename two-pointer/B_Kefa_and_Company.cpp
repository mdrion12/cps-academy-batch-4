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

    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    sort(v.begin(), v.end());
    ll l = 0, r = 0;

    ll ans = INT_MIN;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r].second;

        if (v[r].first - v[l].first >= m)
        {

            while (v[r].first - v[l].first >= m)
            {
                sum -= v[l].second;
                l++;
            }
        }
        ans = max(ans, sum);

        r++;
    }
    cout << ans << "\n";

    return 0;
}
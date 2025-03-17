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
    vector<pair<ll, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        pair<int, int> p = {val, i + 1};
        v[i] = p;
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    bool ans = false;
    while (l < r)
    {
        if ((v[l].first + v[r].first) == m)
        {
            cout << min(v[l].second, v[r].second) << " " << max(v[l].second, v[r].second) << "\n";
            ans = true;
            break;
        }
        else if ((v[l].first + v[r].first) > m)
        {
            r--;
        }
        else if ((v[l].first + v[r].first) < m)
        {
            l++;
        }
    }
    if (!ans)
    {
        cout << "IMPOSSIBLE" << "\n";
    }

    return 0;
}
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
        ll n, k, ans = 0;
        cin >> n >> k;
        vector<ll> a(n), b(n), suma(n), maxb(n);
        cin >> a[0];
        suma[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            cin >> a[i];
            suma[i] = a[i] + suma[i - 1];
        }
        cin >> b[0];
        maxb[0] = b[0];
        for (ll i = 1; i < n; i++)
        {
            cin >> b[i];
            maxb[i] = max(maxb[i - 1], b[i]);
        }
        ans = INT_MIN;
        k--;
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, suma[i] + (k - i) * maxb[i]);
            if (i == k)
                break;
        }
        cout << ans << endl;
    }

    return 0;
}
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

    ll a, b;
    cin >> a >> b;
    vector<ll> v;
    for (ll i = 1; i <= b; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        }
    ll ans = LLONG_MAX;
    ll indval = 0;
    ll index = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        ll value = a % v[i];
        if (value < ans)
        {
            ans = value;
            indval = v[i];
            index = i + 1;
        }
    }
    cout << index << " " << a / indval << " \n";

    return 0;
}
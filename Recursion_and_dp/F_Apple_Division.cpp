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
int t;
vector<ll> v;
ll fn(ll index, ll left, ll right)
{

    if (index == t)
    {
        return abs(left - right);
    }
    ll l = fn(index + 1, left + v[index], right);
    ll r = fn(index + 1, left, right + v[index]);
    return min(l, r);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    ll res = fn(0, 0, 0);
    cout << res << "\n";
    return 0;
}
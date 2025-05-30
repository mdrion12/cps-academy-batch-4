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
        vector<ll> v(n * m + 1);
        for (int i = 1; i < v.size(); i++)
        {
            cin >> v[i];
        }
        ll sum = 0;
        ll value = 0;
        if (n == 2)
        {
            value = n / 2;
            for (ll i = value; i < v.size(); i += n)
            {
                // cout << v[i] << " ";
                sum += v[i];
            }
        }
        else
        {
            value = (n / 2) + 1;
            ll count = 0;

            for (int i = v.size() - value; i >= 1; i -= value)
            {

                if (count < m)
                {
                    // cout << v[i] << " ";
                    sum += v[i];
                    count++;
                }
                else
                {
                    break;
                }
            }
        }

        cout << sum << "\n";
    }

    return 0;
}
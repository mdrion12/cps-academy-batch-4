#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
vector<ll> divisors(ll n)
{
    vector<ll> divisor;
    for (ll i = 1; i * i <= n; i++)
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        ll count = 0;
        while (a != 0)
        {
            if ((a & 1) != 0)
            {
                count++;
            }
            a = a >> 1;
        }
        if (count == 1)
        {
            no
        }
        else
        {
            yes
        }
    }

    return 0;
}
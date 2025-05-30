#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool is_prime(ll x)
{
    if (x < 2)
        return false;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
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
        ll n;
        cin >> n;
        if (is_prime(n))
        {
            if ((n != 2 && n != 3))
                cout << -1 << "\n";
        }
        else
        {
            ll count = 0;
            while (n != 1)
            {
                if (n % 6 == 0)
                {
                    n /= 6;
                }
                else
                {
                    n *= 2;
                }
                count++;
            }
            cout << count << "\n";
        }
    }

    return 0;
}
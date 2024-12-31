#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool calcalte(ll n, ll mid)
{
    ll vasya = 0, total = n;
    while (n > 0)
    {
        ll take = min(mid, n);
        vasya += take;
        n -= take;
        if (n > 0)
        {
            ll value = n / 10;
            n -= value;
        }
    }
    return vasya * 2 >= total;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x;
    cin >> x;
    ll ans = LLONG_MAX;
    ll l = 1, r = x;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (calcalte(x, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    ll mx = INT_MIN;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        mx = max(mx, v[i]);
    }

    auto isOk = [&](ll mid)
    {
        ll sum = 0, sub = 1;
        for (auto it : v)
        {
            sum += it;
            if (sum > mid)
            {
                sub++;
                sum = it;
            }
        }
        if (sub <= m)
        {
            return 1;
        }
        else
            return 0;
    };

    ll l = mx, r = sum;
    ll ans = sum;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (isOk(mid))
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

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll arr[a + 1];
        for (ll i = 1; i <= a; i++)
        {
            cin >> arr[i];
        }
        auto isOk = [&](ll mid)
        {
            ll res = 0;
            for (int i = 1; i <= a - 1; i++)
            {
                ll need = arr[i + 1] - arr[i];

                res += min(need, mid);
            }
            res += mid;
            if (res >= b)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        };
        ll l = 0, r = 1e18;
        ll ans = 0;
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
    }

    return 0;
}
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
        ll n, p, l, t;
        cin >> n >> p >> l >> t;
        ll L = 1, r = n;
        ll ans = 0;
        ll total_task = (n + 6) / 7;
        auto isOk = [&](ll mid)
        {
            ll din = n - mid;
            ll need_task = din * 2;
            ll res = 0;
            if (total_task <= need_task)
            {
                res += (total_task * t);
            }
            else
            {
                res += (need_task * t);
            }
            res += (din * l);
            if (res >= p)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        };

        while (L <= r)
        {
            ll mid = L + (r - L) / 2;
            if (isOk(mid) == 0)
            {
                ans = mid;
                L = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
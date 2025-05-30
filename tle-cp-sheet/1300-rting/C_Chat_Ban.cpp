#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll k, x;
        cin >> k >> x;
        ll l = 1, r = 2 * k - 1;
        ll ans = 2 * k - 1;
        auto isOk = [&](ll mid)
        {
            ll value = 0;
            if (mid <= k)
            {
                value = mid * (mid + 1) / 2;
            }
            else
            {
                ll first_half = k * (k + 1) / 2;
                ll down = mid - k;
                ll rem = k - 1;
                ll second_half = rem * (rem + 1) / 2 - (rem - down) * (rem - down + 1) / 2;
                value = first_half + second_half;
            }
            return value >= x;
        };

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (isOk(mid) == 0)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
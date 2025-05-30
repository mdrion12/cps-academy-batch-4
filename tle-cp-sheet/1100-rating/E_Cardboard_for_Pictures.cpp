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
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto isOk = [&](ll mid)
        {
            ll total = 0;
            for (int i = 0; i < n; i++)
            {
                ll side = (2LL * mid) + v[i];
                ll area = side * side;
                total += area;
                if (total > c)
                {
                    return 1;
                }
            }

            return 0;
        };
        ll l = (ll)0, r = (ll)1e10;
        ll result = 0;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2LL;
            if (isOk(mid) == 0)
            {
                result = mid;
                l = mid + 1LL;
            }
            else
            {
                r = mid - 1LL;
            }
        }
        cout << result << "\n";
    }

    return 0;
}

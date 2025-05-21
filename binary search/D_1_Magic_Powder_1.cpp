#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;
    vector<ll> va(a), vb(a);
    for (int i = 0; i < a; i++)
    {
        cin >> va[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> vb[i];
    }
    auto isOk = [&](ll mid)
    {
        ll rem = b;
        bool f = true;
        for (int i = 0; i < a; i++)
        {
            ll req = va[i] * mid;
            if (req > vb[i])
            {
                ll rr = req - vb[i];
                if (rem < rr)
                {
                    f = false;
                    break;
                }
                rem -= rr;
            }
        }
        if (f)
        {
            return 0;
        }
        else
            return 1;
    };
    ll l = 0, r = 1e6 + 1, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (isOk(mid) == 0)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}
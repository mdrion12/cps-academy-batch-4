#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    vector<ll> v(a + 1, 0);
    for (int i = 1; i <= a; i++)
    {
        ll temp;
        cin >> temp;
        v[i] = temp + v[i - 1];
    }
    auto isOk = [&](ll mid, ll x)
    {
        if (v[mid] >= x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };
    ll b;
    cin >> b;
    while (b--)
    {

        ll x;
        cin >> x;
        ll l = 1, r = a;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (isOk(mid, x) == 0)
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
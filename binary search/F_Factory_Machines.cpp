#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    auto ok = [&](ll mid)
    {
        ll total = 0;
        for (int i = 0; i < a; i++)
        {
            total += (mid / arr[i]);
            if (total >= b)
            {
                return true;
            }
        }
        return false;
    };
    ll l = 0, r = 1e18;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
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
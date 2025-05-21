#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    ll midvalue = t * t / 2 + 1;
    ll l = 1, r = t * t;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll lf = 0, rt = 0;
        for (int i = 1; i <= t; i++)
        {
            rt += min(t, mid / i);
            lf += min(t, (mid - 1) / i);
        }
        if (lf < midvalue && midvalue <= rt)
        {
            ans = mid;
            break;
        }
        else if (rt < midvalue)
        {
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
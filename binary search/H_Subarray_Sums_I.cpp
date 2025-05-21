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
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    auto isOk = [&](ll mid)
    {
        int l = 0, r = 0;
        ll sum = 0;
        ll count = 0;
        while (r < a)
        {
            sum += v[r];
            while (sum > b && l <= r)
            {
                sum -= v[l];
                l++;
            }
            if (sum == b)
            {
                count++;
            }
            r++;
        }
        if (count >= mid)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    };
    ll l = 0, r = 2e5;
    ll ans = 0;
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
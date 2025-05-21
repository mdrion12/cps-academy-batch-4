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
        int a, b;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        auto isOk = [&](ll mid)
        {
            ll sub = 1;
            ll rem = v[0];
            for (auto it : v)
            {
                if ((it - rem) >= mid)
                {
                    sub++;
                    rem = it;
                }
            }
            if (sub >= b)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        };
        sort(v.begin(), v.end());
        int l = 0, r = 1e9;
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
    }

    return 0;
}
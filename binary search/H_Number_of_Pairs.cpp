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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int reml = l - v[i];
            int remr = r - v[i];
            int rl = lower_bound(v.begin() + i + 1, v.end(), reml) - v.begin();
            int rr = upper_bound(v.begin() + i + 1, v.end(), remr) - v.begin() - 1;
            if (rl <= rr)
            {
                ans += (rr - rl) + 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
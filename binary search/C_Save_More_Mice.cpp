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
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        auto isOk = [&](ll mid)
        {
            ll cat = 0;
            ll mouse = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (cat < v[i])
                {
                    cat += n - v[i];
                    mouse++;
                }
                else
                {
                    break;
                }
            }
            if (mouse >= mid)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        };
        int l = 0, r = 4e5;
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
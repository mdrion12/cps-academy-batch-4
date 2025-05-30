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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        auto isOk = [&](ll mid)
        {
            bool f = false;
            for (int i = 0; i < mid; i++)
            {
                int count = 0;
                int r = i;
                while (r < n)
                {
                    if (v[i] != v[r])
                    {
                        count++;
                    }

                    r += mid;
                }
                if (count <= 1)
                {
                    f = true;
                }
            }
            if (f)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        };
        ll ans = n;
        ll l = 0, r = n;
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
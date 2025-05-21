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
        vector<int> fruit(n), v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> fruit[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        auto isOk = [&](ll mid)
        {
            int l = 0, r = 0;
            ll fruits = 0;
            bool found = false;
            while (r < n)
            {
                fruits += fruit[r];
                if (r - l + 1 == mid)
                {
                    bool f = true;
                    for (int i = l; i < r; i++)
                    {
                        if (v[i] % v[i + 1] != 0)
                        {
                            f = false;
                            break;
                        }
                    }
                    if (f)
                    {
                        if (fruits <= k)
                        {
                            found = true;
                        }
                    }

                    fruits -= fruit[l];
                    l++;
                }
                r++;
            }
            if (found)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        };
        ll l = 1, r = 2e5;
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
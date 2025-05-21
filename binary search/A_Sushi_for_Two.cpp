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
    int arr[t + 1];
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    int pre[t + 1] = {0};
    for (int i = 1; i <= t; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    auto isOk = [&](ll mid)
    {
        ll L = 1, R = mid;
        bool found = false;
        while (R <= t)
        {
            ll total = pre[R] - pre[L - 1];
            ll m = L + (R - L) / 2;
            ll left = pre[m] - pre[L - 1];
            ll right = total - left;
            if (left % 2 == 0)
            {
                ll leftcount = left / 2;

                if (right == leftcount)
                {
                    found = true;
                }
            }
            else if (left == m)
            {
                if (right % 2 == 0)
                {
                    ll rightcount = right / 2;
                    if (rightcount == m)
                    {
                        found = true;
                    }
                }
            }
            L++;
            R++;
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
    ll ans = 0;
    ll l = 2, r = 1e5;
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
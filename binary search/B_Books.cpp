#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto isOk = [&](int mid)
    {
        int l = 0, r = 0;
        int sum = 0;
        bool f = false;
        while (r < n)
        {
            sum += v[r];
            if (r - l + 1 == mid)
            {
                if (sum <= t)
                {
                    f = true;
                    break;
                }
                sum -= v[l];
                l++;
            }
            r++;
        }
        if (f)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    };
    int l = 1, r = 1e5;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
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
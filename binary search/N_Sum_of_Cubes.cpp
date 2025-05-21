#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
bool isOk(ll mid, ll rem)
{
    if (v[mid] < rem)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (ll i = 1; i <= 1e4; i++)
    {
        v.push_back(i * i * i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        bool f = false;
        for (ll i = 1; i <= 1e4; i++)
        {
            ll rem = a - (i * i * i);
            int l = 0, r = v.size() - 1;
            ll ans = 0;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (isOk(mid, rem) == 0)
                {

                    l = mid + 1;
                }
                else
                {
                    ans = mid;
                    r = mid - 1;
                }
            }
            if (v[ans] == rem)
            {
                f = true;
            }
        }
        if (f)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
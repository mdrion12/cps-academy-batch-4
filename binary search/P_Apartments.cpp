#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    multiset<ll> b;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        b.insert(x);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        auto it = b.lower_bound(a[i] - k);
        if (it != b.end() && *it <= a[i] + k)
        {
            ans++;
            b.erase(it);
        }
    }
    cout << ans << "\n";

    return 0;
}
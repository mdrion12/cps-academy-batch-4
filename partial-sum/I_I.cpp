#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int x = 2e5 + 9;
int freq[x];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll> res;
    ll k = 0;
    res.push_back(0);
    for (ll i = 1; i <= x; i++)
    {
        ll y = res.back() + k;
        res.push_back(y);
        k++;
    }
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << res[i] << " ";
    // }
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
        freq[v[i]]++;
    }
    vector<ll> value(mx + 1), pref(mx + 1, 0), suffix(mx + 3, 0);
    for (int i = 1; i <= mx; i++)
    {
        value[i] = res[freq[i]];
    }
    for (int i = 1; i <= mx; i++)
    {
        pref[i] = value[i] + pref[i - 1];
    }
    suffix[mx] = value[mx];
    for (int i = mx - 1; i >= 0; i--)
    {
        suffix[i] = value[i] + suffix[i + 1];
    }
    // for (int i = 0; i <= mx; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i <= mx + 2; i++)
    // {
    //     cout << suffix[i] << " ";
    // }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll pf = pref[v[i] - 1];
        ll sf = suffix[v[i] + 1];
        ll vx = freq[v[i]];
        vx--;
        ll result = res[vx] + sf + pf;
        cout << result << "\n";
    }

    return 0;
}
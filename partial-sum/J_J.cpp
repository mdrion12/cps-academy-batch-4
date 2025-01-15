#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    vector<ll> pref(a + 1, 0);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= a; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }

    map<ll, ll> mp;
    ll ans = 0;
    for (int i = 0; i <= a; i++)
    {
        ll value = pref[i] - b;
        ans += mp[value];
        mp[pref[i]]++;
    }
    cout << ans << "\n";
    return 0;
}

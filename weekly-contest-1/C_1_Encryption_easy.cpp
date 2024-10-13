#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;
    vector<ll> v(a + 1);
    for (int i = 1; i <= a; i++)
    {
        cin >> v[i];
    }
    vector<ll> pref(a + 3);
    pref[1] = v[1];
    for (int i = 2; i <= a; i++)
    {
        pref[i] = v[i] + pref[i - 1];
    }
    // for (int i = 1; i <= a; i++)
    // {
    //     cout << pref[i] << "\n";
    // }
    ll maximum = INT_MIN;
    for (int i = 1; i <= a; i++)
    {
        ll f = pref[i];
        ll l = pref[a] - pref[i];
        f = f % b;
        l = l % b;
        maximum = max(maximum, f + l);
    }
    cout << maximum << "\n";

    return 0;
}
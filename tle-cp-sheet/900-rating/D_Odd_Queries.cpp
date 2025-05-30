#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> v(a + 1);
        for (int i = 1; i <= a; i++)
        {
            cin >> v[i];
        }
        vector<ll> pref(a + 1, 0);
        for (int i = 1; i <= a; i++)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        while (b--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            long long sum = pref[a];
            sum -= pref[r] - pref[l - 1];
            sum += (k * (r - l + 1));
            if (sum % 2 == 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}
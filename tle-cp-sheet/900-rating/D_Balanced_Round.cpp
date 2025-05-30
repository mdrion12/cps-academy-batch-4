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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll l = 1;
        ll ans = 0;

        for (int i = 1; i < n; i++)
        {
            if (abs(v[i] - v[i - 1]) <= k)
            {
                l++;
            }
            else
            {
                ans = max(ans, l);
                l = 1;
            }
        }
        ans = max(ans, l);
        cout << n - ans << "\n";
    }

    return 0;
}
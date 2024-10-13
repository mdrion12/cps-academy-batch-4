#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll min_price = v[0];
    ll total_steps = 0;

    for (int i = 0; i < n; i++)
    {
        if ((v[i] - min_price) % k != 0)
        {
            cout << "-1\n";
            return 0;
        }
        total_steps += (v[i] - min_price) / k;
    }

    cout << total_steps << "\n";

    return 0;
}

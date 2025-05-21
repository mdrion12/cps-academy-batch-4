#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        vector<ll> v, index;
        for (int i = 1; i <= a; i++)
        {
            ll temp;
            cin >> temp;
            if (temp < i)
            {
                v.push_back(temp);
                index.push_back(i);
            }
        }

        ll result = 0;
        for (ll i = 0; i < index.size(); i++)
        {
            result += lower_bound(index.begin(), index.end(), v[i]) - index.begin();
        }
        cout << result << "\n";
    }

    return 0;
}
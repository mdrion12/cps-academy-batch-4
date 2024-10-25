#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    ll value = 1;
    ll j = 1;
    while (j <= 10)
    {
        for (int i = 1; i <= 10; i++)
        {
            v.push_back(value * i);
        }
        value *= 10;
        j++;
    }

    auto p = upper_bound(v.begin(), v.end(), t);
    cout << *p - t << "\n";

    return 0;
}

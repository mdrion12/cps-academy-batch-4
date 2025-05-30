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
        ll a, b, n;
        cin >> a >> b >> n;
        ll sum = b, c = 1;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            c = min(v[i] + c, a);
            sum += c - 1;
            c = 1;
        }
        cout << sum << "\n";
    }

    return 0;
}
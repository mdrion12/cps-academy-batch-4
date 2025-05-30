#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == c and b == d)
        {
            cout << 0 << endl;
            continue;
        }

        if (b > d)
        {
            cout << -1 << endl;
            continue;
        }

        ll shift = d - b;
        if (a < c - shift)
        {
            cout << -1 << endl;
        }
        else
        {
            ll ans = a - (c - shift) + shift;
            cout << ans << endl;
        }
    }
    return 0;
}
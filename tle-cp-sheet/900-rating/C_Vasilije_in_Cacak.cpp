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
        ll n, k, x;
        cin >> n >> k >> x;
        ll minsum = (k * (k + 1)) / 2;
        ll maxsum = ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2);
        if (minsum <= x && maxsum >= x)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
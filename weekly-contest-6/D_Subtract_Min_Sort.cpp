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
        ll a;
        cin >> a;
        ll ar[a + 1];
        for (int i = 1; i <= a; i++)
        {
            cin >> ar[i];
        }
        for (int i = 1; i <= a - 1; i++)
        {
            ll val = min(ar[i], ar[i + 1]);
            ar[i] -= val;
            ar[i + 1] -= val;
        }
        if (is_sorted(ar + 1, ar + a))
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
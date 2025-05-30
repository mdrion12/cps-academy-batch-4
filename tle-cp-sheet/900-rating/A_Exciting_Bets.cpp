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
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << "\n";
        }
        else
        {
            ll constant = abs(a - b); // সর্বোচ্চ GCD যা সম্ভব
            ll moves = min(a % constant, constant - (a % constant));
            cout << constant << " " << moves << "\n";
        }
    }
    return 0;
}

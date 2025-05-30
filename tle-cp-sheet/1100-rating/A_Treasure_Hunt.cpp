#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, a;
        cin >> x >> y >> a;

        ll rounds = 5 * a / (x + y);
        ll depth = rounds * (x + y);

        if (depth + x > a)
        {
            no
        }
        else
        {
            yes
        }
    }

    return 0;
}

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
        int x, y;
        cin >> x >> y;

        int res = x / y;
        if (x % y != 0)
        {
            res += (x % y);
        }

        cout << res << "\n";
    }

    return 0;
}

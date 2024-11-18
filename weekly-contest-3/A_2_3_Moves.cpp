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
        int value;
        cin >> value;
        value = abs(value);
        int ans = 0;
        if (value < 2)
        {
            ans = 2;
        }
        else if (value % 3 == 0)
        {
            ans = value / 3;
        }
        else
        {
            int rem = value % 3;
            if (rem % 2 == 0)
            {
                ans = value / 3;
                ans += rem / 2;
            }
            else
            {
                int x = value / 3;
                x--;
                int y = x * 3;
                int total = value - y;
                ans += total / 2;
                ans += x;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

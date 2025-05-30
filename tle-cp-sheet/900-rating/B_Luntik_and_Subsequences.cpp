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
        int a;
        cin >> a;
        vector<ll> v(a);
        ll count1 = 0, count0 = 0, sum = 0;
        ll ans = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 0)
            {
                count0++;
            }
            else if (v[i] == 1)
            {
                count1++;
            }
        }

        if (count1 == 0)
        {
            cout << 0 << "\n";
        }
        else if (count1 > 0 && count0 == 0)
        {
            cout << count1 << "\n";
        }
        else
        {
            ans = (1LL << count0) * count1;
            cout << ans << "\n";
        }
    }

    return 0;
}

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
        vector<ll> v(a + 1), x;
        v[a] = 0;
        ll l = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i <= a; i++)
        {
            if (v[i] != 0)
            {
                x.push_back(v[i]);
            }
            else
            {
                if (x.size() > 0)
                {
                    l++;
                    x.clear();
                }
            }
        }
        if (l >= 2)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << l << "\n";
        }
    }

    return 0;
}
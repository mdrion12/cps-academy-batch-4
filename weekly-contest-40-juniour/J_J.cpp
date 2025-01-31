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
        map<int, int> mp;
        vector<int> v(a);
        int mn = INT_MAX;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            mn = min(mn, v[i]);
        }
        if (mp[0] >= 1)
        {
            cout << a - mp[0] << "\n";
        }
        else
        {
            int ans = 0;
            bool f = false;
            for (auto it : mp)
            {
                if (it.second >= 2)
                {
                    f = true;
                }
            }
            if (f)
            {
                cout << a << "\n";
            }
            else
            {
                cout << a + 1 << "\n";
            }
        }
    }

    return 0;
}
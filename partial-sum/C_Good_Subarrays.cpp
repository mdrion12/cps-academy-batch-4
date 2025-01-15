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
        vector<int> v(a + 1), pref(a + 1, 0);
        for (int i = 1; i <= a; i++)
        {
            char c;
            cin >> c;
            v[i] = c - '0';
        }
        for (int i = 1; i <= a; i++)
        {
            pref[i] = v[i] + pref[i - 1];
        }
        map<int, int> mp;
        ll count = 0;
        for (int i = 0; i <= a; i++)
        {

            pref[i] = pref[i] - i;
            count += mp[pref[i]];
            mp[pref[i]]++;
        }
        cout << count << "\n";
    }

    return 0;
}
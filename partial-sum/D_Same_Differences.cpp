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
        vector<int> v(a + 1);
        for (int i = 1; i <= a; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        ll count = 0;
        for (int i = 1; i <= a; i++)
        {
            int val = v[i] - i;
            count += mp[val];
            mp[val]++;
        }
        cout << count << "\n";
    }

    return 0;
}
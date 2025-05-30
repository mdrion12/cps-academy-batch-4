#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        if (mp.size() == 1)
        {
            if (mp[0] >= 1)
            {
                cout << -1 << "\n";
                continue;
            }
        }
        int valu1 = v[0] + v[0];
        int value2 = v[n - 1] + v[n - 1];
        bool f1 = binary_search(v.begin(), v.end(), valu1);
        bool f2 = binary_search(v.begin(), v.end(), value2);
        if (f1 == false)
        {
            cout << v[0] << " " << v[0] << "\n";
        }
        else if (f2 == false)
        {
            cout << v[n - 1] << " " << v[n - 1] << "\n";
        }
    }
}

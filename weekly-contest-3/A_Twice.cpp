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
        int x;
        cin >> x;
        vector<int> v(x + 1);
        map<int, int> mp;
        for (int i = 1; i <= x; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int count = 0;
        for (auto it : mp)
        {
            int value = it.second / 2;
            count += value;
        }
        cout << count << "\n";
    }

    return 0;
}
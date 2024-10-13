#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        map<int, int> mp;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        int s = 0;
        for (int i = a - 1; i >= 0; i--)
        {
            if (mp[v[i]] == 0)
            {
                s++;
                mp[v[i]]++;
            }
            else
                break;
        }
        cout << a - s << "\n";
    }

    return 0;
}
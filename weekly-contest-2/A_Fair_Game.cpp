#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> mp;
    int t;
    cin >> t;
    while (t--)
    {
        int v;
        cin >> v;
        mp[v]++;
    }

    if (mp.size() == 2)
    {
        auto it = mp.begin();
        int count1 = it->second;
        ++it;
        int count2 = it->second;

        if (count1 == count2)
        {
            cout << "YES" << "\n";
            for (auto it : mp)
            {
                cout << it.first << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}

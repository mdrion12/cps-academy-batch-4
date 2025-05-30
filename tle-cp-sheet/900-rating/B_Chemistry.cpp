#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        map<char, int> mp;
        for (int i = 0; i < a; i++)
        {
            char c;
            cin >> c;
            mp[c]++;
        }

        int count = 0;
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                count++;
            }
        }

        if (count - 1 < 0)
        {
            count = 0;
        }
        else
        {
            count = count - 1;
        }
        if (b >= count && b <= a)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
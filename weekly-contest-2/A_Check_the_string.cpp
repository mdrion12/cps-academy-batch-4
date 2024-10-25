#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    bool f = true;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] <= s[i + 1])
        {
            continue;
        }
        else
        {
            f = false;
            break;
        }
    }
    if (mp.size() < 3)
    {
        f = false;
    }
    if (f)
    {
        if (mp['c'] == mp['a'] || mp['c'] == mp['b'])
        {
            cout << "YES" << "\n";
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
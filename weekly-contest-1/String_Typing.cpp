#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    vector<char> v(c + 1);
    map<char, int> mp;
    for (int i = 1; i <= c; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    if (mp.size() == 1)
    {
        if (c % 2 == 0)
        {
            cout << (c / 2) + 1 << "\n";
        }
        else
        {
            cout << (c / 2) + 2 << "\n";
        }
        return 0;
    }

    int count = 0;
    int i = 1;
    string s;

    while (i <= c)
    {
        s += v[i];
        count++;
        i++;

        if (i <= c)
        {
            bool can_copy = true;
            int track = s.size();

            for (int j = 0; j < track; j++)
            {
                if (i + j > c || v[i + j] != s[j])
                {
                    can_copy = false;
                    break;
                }
            }

            if (can_copy)
            {
                count++;
                i += track;
            }
        }
    }

    cout << count << "\n";
    return 0;
}

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
        string s;
        cin >> s;
        int sz = 0;
        int i = 0;

        while (i < s.size())
        {
            int j = i;
            int ab = 0, ba = 0;

            while (j < s.size() - 1)
            {
                if (s[j] == 'a' && s[j + 1] == 'b')
                {
                    ab++;
                    j += 2;
                }
                else if (s[j] == 'b' && s[j + 1] == 'a')
                {
                    ba++;
                    j += 2;
                }
                else
                {
                    j++;
                }
            }
            if (ab == ba)
            {
                sz = max(sz, j - i); // স্ট্রিংয়ের দৈর্ঘ্য বের করতে এখানে আপডেট
            }
            i++;
        }

        if (sz == 0)
        {
            map<char, int> mp;
            for (int i = 0; i < s.size(); i++)
            {
                mp[s[i]]++;
            }
            cout << max(mp['a'], mp['b']) << "\n"; // বড় স্ট্রিংয়ের দৈর্ঘ্য
        }
        else
        {
            cout << sz << "\n"; // ভালো স্ট্রিংয়ের দৈর্ঘ্য
        }
    }

    return 0;
}

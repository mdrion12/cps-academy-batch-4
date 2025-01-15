#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 100007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<ll> pre;
    for (int i = 0; i < 500005; i++)
    {
        pre.push_back(i);
    }
    for (int i = 1; i < pre.size(); i++)
    {
        pre[i] = pre[i] + pre[i - 1];
    }
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        ll count = 0;
        ll l = 0, r = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int j;
            int f[26] = {0};
            for (j = i; j < s.size(); j++)
            {
                if (f[s[j] - 'a'] != 0)
                {
                    break;
                }
                f[s[j] - 'a']++;
            }
            count += pre[j - i];
            count %= MOD;
        }

        cout << "Case " << i << ": " << count << "\n";
    }

    return 0;
}

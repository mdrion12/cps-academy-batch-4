#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

int maxbeauty(string s, char c, int k)
{
    int l = 0, r = 0;
    int count = 0;
    int ans = 0;
    while (r < s.size())
    {
        if (s[r] != c)
        {
            count++;

            while (count > k)
            {
                if (s[l] != c)
                {
                    count--;
                }
                l++;
            }
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    // int l = 0, r = 0;
    // map<char, int> mp;
    // int ans = 0;
    // while (r < n)
    // {
    //     mp[s[r]]++;
    //     int mx = INT_MIN;
    //     int mn = INT_MAX;
    //     for (auto it : mp)
    //     {
    //         mx = max(mx, it.second);
    //         mn = min(mn, it.second);
    //     }
    //     if (mn <= m)
    //     {
    //         ans = max(ans, r - l + 1);
    //     }
    //     else
    //     {
    //         int mx = INT_MIN;
    //         int mn = INT_MAX;
    //         for (auto it : mp)
    //         {
    //             mx = max(mx, it.second);
    //             mn = min(mn, it.second);
    //         }
    //         while (mn > m)
    //         {
    //             mp[s[l]]--;
    //             if (mp[s[l]] == 0)
    //             {
    //                 mp.erase(s[l]);
    //             }
    //             mx = INT_MIN, mn = INT_MAX;
    //             for (auto it : mp)
    //             {
    //                 mx = max(mx, it.second);
    //                 mn = min(mn, it.second);
    //             }
    //             l++;
    //         }
    //     }
    //     r++;
    // }
    // cout << ans << "\n";
    cout << max(maxbeauty(s, 'a', m), maxbeauty(s, 'b', m)) << "\n";

    return 0;
}
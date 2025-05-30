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
        ll a;
        cin >> a;
        string s = to_string(a);
        reverse(s.begin(), s.end());
        vector<string> v = {"52", "05", "57", "00"};
        int ans = INT_MAX;

        for (int i = 0; i < v.size(); i++)
        {
            int l = 0, count = 0;
            int remove_count = 0;

            while (l < s.size())
            {
                if (count == 0 && v[i][0] == s[l])
                {
                    count++;
                }
                else if (count == 1 && v[i][1] == s[l])
                {
                    count++;
                    break;
                }
                else
                {
                    remove_count++;
                }
                l++;
            }

            if (count == 2)
            {
                ans = min(ans, remove_count);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

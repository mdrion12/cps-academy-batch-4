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
        int l = 0, r = a - 1;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        if (l > r)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << r - l + 1 << "\n";
        }
    }

    return 0;
}
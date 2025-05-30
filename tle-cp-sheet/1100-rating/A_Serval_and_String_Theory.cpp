#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string xn = s;
        reverse(xn.begin(), xn.end());
        if (s < xn)
        {
            cout << "YES" << "\n";
            continue;
        }
        int first = n / 2;
        int second = first + 1;
        if (n % 2 == 1)
        {
            second = first + 1;
        }
        else
        {
            second = first;
        }
        sort(s.begin(), s.begin() + first, greater<char>());
        sort(s.begin() + second, s.end());
        int i = 0, l = n - 1;
        while (k > 0 && i < l)
        {
            if (s[i] > s[l])
            {
                swap(s[i], s[l]);
                i++;
                l--;
                k--;
            }
            else if (s[i] <= s[l])
            {
                l--;
            }
        }
        // cout << s << "\n";
        string x = s;
        reverse(x.begin(), x.end());
        // cout << x << "\n";
        if (s < x)
        {
            yes
        }
        else
        {
            no
        }
    }

    return 0;
}
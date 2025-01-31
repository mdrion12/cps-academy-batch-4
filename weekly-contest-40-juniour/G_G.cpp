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
    string s;
    cin >> s;
    int k = 1;
    int l = 0, r = 0;
    string st = "";
    string x = "";
    while (r < t)
    {
        st += s[r];
        if (r - l + 1 == k)
        {
            x += st[0];
            st = "";
            l = r + 1;
            k++;
        }

        r++;
    }
    cout << x << "\n";

    return 0;
}
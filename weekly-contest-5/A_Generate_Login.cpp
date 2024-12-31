#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, s1;
    cin >> s >> s1;
    string res;
    res += s[0];

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] < s1[0])
        {
            res += s[i];
        }
        else
        {
            break;
        }
    }
    res += s1[0];
    cout << res << endl;
    return 0;
}

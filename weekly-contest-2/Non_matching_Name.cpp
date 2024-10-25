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
        int a, b;
        cin >> a >> b;
        string s1, s2;
        cin >> s1 >> s2;

        set<char> c;

        for (int i = 0; i < s1.size(); i++)
        {
            c.insert(s1[i]);
        }

        for (int i = 0; i < s2.size(); i++)
        {
            c.insert(s2[i]);
        }

        if (c.size() == 26)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}

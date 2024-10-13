#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        queue<char> q;
        for (int i = 0; i < s.size(); i++)
        {
            if (!(q.empty()))
            {
                if (s[i] != q.front())
                {
                    q.pop();
                }
                else
                {
                    q.push(s[i]);
                }
            }
            else
            {
                q.push(s[i]);
            }
        }
        if (q.empty())
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
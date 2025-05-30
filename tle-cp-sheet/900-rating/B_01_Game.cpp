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
        string s;
        cin >> s;
        int count = 0;
        queue<char> q;
        int i = 0;
        while (i < s.size())
        {
            if (q.empty())
            {
                q.push(s[i]);
            }
            else
            {
                if (q.front() != s[i])
                {
                    // cout << s[i] << " " << q.front() << " ";
                    q.pop();
                    count++;
                }
                else
                {
                    q.push(s[i]);
                }
            }
            i++;
        }
        if (count % 2 == 0)
        {
            cout << "NET" << "\n";
        }
        else
        {
            cout << "DA" << "\n";
        }
    }

    return 0;
}
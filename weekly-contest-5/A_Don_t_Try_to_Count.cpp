#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string x, int s, string v)
{
    for (int i = 0; i <= x.size() - s; i++)
    {
        if (x.substr(i, s) == v)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (x.find(s) != string::npos)
            {
                cout << i << endl;
                found = true;
                break;
            }
            x += x; // Double the string
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

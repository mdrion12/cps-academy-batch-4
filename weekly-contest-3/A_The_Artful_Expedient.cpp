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
    set<int> s;
    vector<int> x(t + 1), y(t + 1);
    for (int i = 1; i <= t; i++)
    {
        cin >> x[i];
        s.insert(x[i]);
    }
    for (int i = 1; i <= t; i++)
    {
        cin >> y[i];
        s.insert(y[i]);
    }
    int count = 0;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {

            int v = x[i] ^ y[j];
            if (s.find(v) != s.end())
            {
                count++;
            }
        }
    }
    // cout << count << "\n";
    if (count % 2 == 0)
    {
        cout << "Karen" << "\n";
    }
    else
    {
        cout << "Koyomi" << "\n";
    }

    return 0;
}
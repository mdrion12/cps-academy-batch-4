#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<int> v(t + 1), pref(t + 3);
    for (int i = 1; i <= t; i++)
    {
        cin >> v[i];
    }
    pref[1] = v[1];
    for (int i = 2; i <= t; i++)
    {
        pref[i] = v[i] + pref[i - 1];
    }
    // for (int i = 1; i <= t; i++)
    // {
    //     cout << pref[i] << "\n";
    // }
    int h = (pref[t] + 1) / 2;
    bool find = false;
    int value = 0;
    for (int i = 1; i <= t; i++)
    {
        if (pref[i] >= h)
        {
            value = i;
            find = true;
            break;
        }
    }
    if (find)
    {
        cout << value << "\n";
    }

    return 0;
}
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
    vector<int> v(t);
    int mx = INT_MIN;
    int index = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
        if (mx <= v[i])
        {
            mx = v[i];
            index = i;
        }
    }
    if (v[0] == mx && index == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << (mx - v[0]) + 1 << "\n";
    }

    return 0;
}
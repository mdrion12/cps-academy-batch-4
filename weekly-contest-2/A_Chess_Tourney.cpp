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
    vector<int> v(2 * t);
    for (int i = 0; i < 2 * t; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sz = v.size();
    int hf = sz / 2;
    if (v[hf - 1] != v[hf])
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
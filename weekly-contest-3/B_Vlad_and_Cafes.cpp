#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    vector<int> v(a + 1);
    for (int i = 1; i <= a; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 1; i <= a; i++)
    {
        mp[v[i]] = i;
    }
    int minimum = INT_MAX;
    int ans = -1;
    for (auto it : mp)
    {
        if (it.second < minimum)
        {
            ans = it.first;
            minimum = it.second;
        }
    }
    cout << ans << "\n";
}
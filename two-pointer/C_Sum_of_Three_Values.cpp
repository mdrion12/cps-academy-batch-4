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

    ll n, m;
    cin >> n >> m;
    vector<pair<ll, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        pair<int, int> p = {val, i + 1};
        v[i] = p;
    }
    sort(v.begin(), v.end());
    bool f = false;
    for (int i = 0; i < n - 2; i++)
    {
        ll req = m - v[i].first;
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            ll sum = v[l].first + v[r].first;
            if (sum == req)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << "\n";
                f = true;
                break;
            }
            else if (sum > req)
            {
                r--;
            }
            else if (sum < req)
            {
                l++;
            }
        }
        if (f)
        {
            break;
        }
    }
    if (!f)
    {
        cout << "IMPOSSIBLE" << "\n";
    }

    return 0;
}
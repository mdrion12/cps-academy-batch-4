#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
bool cmp(pair<ll, int> a, pair<ll, int> b)
{
    return a.first > b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> visit(n, -1);
        vector<pair<ll, int>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            ll v;
            cin >> v;
            a[i] = {v, i};
        }
        for (int i = 0; i < n; i++)
        {
            ll v;
            cin >> v;
            b[i] = {v, i};
        }
        for (int i = 0; i < n; i++)
        {
            ll v;
            cin >> v;
            c[i] = {v, i};
        }
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        sort(c.begin(), c.end(), cmp);

        ll maxvalue = INT_MIN;

        for (int i = 0; i < min(3, n); i++)
        {
            for (int j = 0; j < min(3, n); j++)
            {
                for (int k = 0; k < min(n, 3); k++)
                {
                    if (a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second)
                    {
                        maxvalue = max(maxvalue, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << maxvalue << "\n";
    }

    return 0;
}
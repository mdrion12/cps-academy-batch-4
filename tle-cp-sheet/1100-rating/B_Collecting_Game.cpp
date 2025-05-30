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
        ll n;
        cin >> n;
        vector<ll> v(n + 1), res(n + 1);
        unordered_map<ll, ll> ump;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            res[i] = v[i];
        }
        sort(v.begin() + 1, v.end());
        ll j = 1;
        ll sum = 0;
        ll i = 1;
        while (j < n)
        {
            sum += v[j];
            if (sum >= v[j + 1])
            {
                j++;
            }
            else
            {
                while (i <= j)
                {

                    ump[v[i]] = j - 1;
                    i++;
                }
                j++;
            }
        }
        while (i <= j)
        {

            ump[v[i]] = j - 1;
            i++;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ump[res[i]] << " ";
        }
        cout << "\n";
    }

    return 0;
}
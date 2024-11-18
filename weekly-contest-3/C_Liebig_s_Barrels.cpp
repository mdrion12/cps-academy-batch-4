#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k, l;
    cin >> n >> k >> l;
    ll sz = n * k;
    vector<ll> v(sz + 1);
    for (int i = 1; i <= sz; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    bool f = true;
    // ei loop use korle tle ashce jeta ouatasavabi. brute force apply korechi
    //   for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i != j)
    //         {
    //             ll dif = abs(v[i] - v[j]);
    //             if (dif > l)
    //             {
    //                 f = false;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // r ei nicer logicta apply korle wrong answer ase.. nicherta te wrong asar karon ki?
    ll dif = abs(v[1] - v[n]);
    if (dif > l)
    {
        f = false;
    }
    if (f)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += v[i];
        }
        cout << sum << "\n";
    }
    else
    {
        cout << sum << "\n";
    }

    return 0;
}
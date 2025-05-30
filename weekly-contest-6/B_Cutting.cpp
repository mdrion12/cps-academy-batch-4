#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll jor = 0, bijor = 0;
ll a, b;
ll ans = 0;
ll cost = 0;
vector<ll> v;
void calculate(ll i)
{
    if (i >= a || i + 1 >= a)
    {
        return;
    }
    if (v[i] % 2 == 0)
    {
        jor++;
    }
    else
    {
        bijor++;
    }

    if (jor == bijor)
    {
        ll cst = abs(v[i] - v[i + 1]);
        if ((cst + cost) <= b)
        {
            ans++;
            cost += cst;
        }
    }
    calculate(i + 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    calculate(0);
    cout << ans << "\n";

    return 0;
}
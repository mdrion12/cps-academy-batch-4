#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    vector<ll> v(a + 1);
    for (int i = 1; i <= a; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;
    for (int i = 1; i <= b; i++)
    {
        sum += v[i] * i;
    }

    ll ans = sum;
    ll window_sum = 0;

    for (int i = 1; i <= b; i++)
    {
        window_sum += v[i];
    }

    int l = 1, r = b;
    while (r < a)
    {
        sum -= window_sum;
        r++;
        sum += (ll)v[r] * b;
        window_sum -= v[l];
        window_sum += v[r];
        l++;
        ans = max(ans, sum);
    }

    cout << ans << "\n";
    return 0;
}

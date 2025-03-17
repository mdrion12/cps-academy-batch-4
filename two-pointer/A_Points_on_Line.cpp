#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d;
    cin >> n >> d;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        while (v[r] - v[l] > d)
        {
            l++;
        }
        int count = r - l;
        if (count >= 2)
        {
            ans += (1LL * count * (count - 1)) / 2;
        }
    }

    cout << ans << "\n";
    return 0;
}

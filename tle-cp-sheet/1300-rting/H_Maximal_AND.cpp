#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> count(31, 0);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 30; j >= 0; j--)
            {
                if (v[i] & (1 << j))
                {
                    count[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int need = n - count[i];
            if (need <= k)
            {
                k -= need;
                ans += (1 << i);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
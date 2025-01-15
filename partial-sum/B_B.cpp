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
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 1), res(n + 1, INT_MIN);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int maximum = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            int l = 0, r = 0;
            int sum = 0;
            int mx = INT_MIN;

            while (r < n)
            {
                sum += v[r];
                if ((r - l + 1) == i)
                {
                    mx = max(sum, mx);
                    sum -= v[l];
                    l++;
                }
                r++;
            }
            res[i] = mx;
        }

        vector<int> output(n + 1, 0);
        for (int k = 0; k <= n; k++)
        {
            int maximum = 0;
            for (int i = 1; i <= n; i++)
            {
                maximum = max(maximum, res[i] + min(k, i) * x);
            }
            output[k] = maximum;
        }
        for (int k = 0; k <= n; k++)
        {
            cout << output[k] << " ";
        }
        cout << "\n";
    }

    return 0;
}

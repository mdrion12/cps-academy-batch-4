#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> P(n + 1, -1);
        vector<bool> used(n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            int val = x ^ i;
            if (val >= 1 && val <= n && !used[val])
            {
                P[i] = val;
                used[val] = true;
            }
        }

        int cur = 1;
        for (int i = 1; i <= n; i++)
        {
            if (P[i] == -1)
            {
                while (used[cur])
                    cur++;
                P[i] = cur;
                used[cur] = true;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << P[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

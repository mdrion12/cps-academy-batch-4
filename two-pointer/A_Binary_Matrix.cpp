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
        int n, m;
        cin >> n >> m;
        char arr[n][m];

        int row[n], col[m];
        memset(row, 0, sizeof(row));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '1')
                {
                    row[i]++;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            ll count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == '1')
                {
                    count++;
                }
            }
            col[j] = count;
        }
        ll ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (row[i] % 2 == 1)
            {
                ans1++;
            }
        }
        ll ans2 = 0;
        for (int i = 0; i < m; i++)
        {
            if (col[i] % 2 == 1)
            {
                ans2++;
            }
        }
        cout << max(ans1, ans2) << "\n";
    }

    return 0;
}

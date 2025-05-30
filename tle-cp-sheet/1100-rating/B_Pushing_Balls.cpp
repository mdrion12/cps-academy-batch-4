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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int check[n][m];
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                arr[i][j] = c - '0';
                if (arr[i][j] == 1)
                {
                    count1++;
                }
                check[i][j] = 0;
            }
        }
        int ll c1 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                {
                    if (check[i][j] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        check[i][j] = 1;
                        c1++;
                    }

                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == 1)
                {
                    if (check[i][j] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        check[i][j] = 1;
                        c1++;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        if (c1 == count1)
        {
            yes
        }
        else
        {
            no
        }
    }

    return 0;
}
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
        int n;
        cin >> n;
        vector<int> v(n + 1), res(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> res[i];
        }
        int l = 0, r = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] != res[i])
            {
                l = i;
                break;
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (v[i] != res[i])
            {
                r = i;
                break;
            }
        }
        int i = l - 1;
        if (i >= 1)
        {
            while (i >= 1)
            {
                if (v[i] == res[i] && res[i + 1] >= res[i])
                {
                    l = i;
                    i--;
                }
                else
                {
                    break;
                }
            }
        }
        int j = r + 1;
        if (r <= n)
        {
            while (j <= n)
            {
                if (v[j] == res[j] && res[j] >= res[j - 1])
                {
                    r = j;
                    j++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << l << " " << r << "\n";
    }

    return 0;
}
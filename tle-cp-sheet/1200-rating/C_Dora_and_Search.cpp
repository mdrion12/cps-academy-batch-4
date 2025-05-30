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
        vector<int> v(n + 1), vis(n + 1, -1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int mn = 1, mx = n;
        int vl = 1, vr = n;
        int l = 1, r = n;
        int ans1 = 0, ans2 = 0;
        bool f1 = false, f2 = false;

        while (l < r)
        {
            if (v[l] == mn)
            {
                vis[v[l]] = 1;
                l++;
                while (vis[vl] == 1)
                    vl++;
                if (vl < vr)
                    mn = vl;
            }
            else if (v[l] == mx)
            {
                vis[v[l]] = 1;
                while (vis[vr] == 1)
                    vr--;
                if (vr > vl)
                    mx = vr;
                l++;
            }
            else
            {
                f1 = true;
            }

            if (v[r] == mn)
            {
                vis[v[r]] = 1;
                while (vis[vl] == 1)
                    vl++;
                if (vl < vr)
                    mn = vl;
                r--;
            }
            else if (v[r] == mx)
            {
                vis[v[r]] = 1;
                while (vis[vr] == 1)
                    vr--;
                if (vr > vl)
                    mx = vr;
                r--;
            }
            else
            {
                f2 = true;
            }

            if (f1 && f2)
            {
                ans1 = l;
                ans2 = r;
                break;
            }
            else
            {
                f1 = false;
                f2 = false;
            }
        }

        if (ans1 == 0 && ans2 == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans1 << " " << ans2 << "\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int n = 2e5 + 1;
int a, b;
int ar1[n], ar2[n];
bool isOk(int mid, int v)
{
    if (ar1[mid] <= v)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> ar1[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> ar2[i];
    }
    sort(ar1, ar1 + a);
    for (int i = 0; i < b; i++)
    {
        ll ans = -1;
        int l = 0, r = a - 1;
        int v = ar2[i];
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (isOk(mid, v) == 0)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + 1 << " ";
    }
    return 0;
}
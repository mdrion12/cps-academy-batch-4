#include <bits/stdc++.h>
using namespace std;
#define ll long long
int arr[1000002];
bool isOk(int mid, int v)
{
    if (arr[mid] >= v)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int v;
    cin >> v;
    int l = 0, r = n - 1;
    ll ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isOk(mid, v))
        {
            if (arr[mid] == v)
            {
                ans = mid;
            }
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << "\n";

    return 0;
}
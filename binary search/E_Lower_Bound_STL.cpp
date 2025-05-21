#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int n = 1e5 + 3;
int arr[n];
bool isOk(int mid, int x)
{
    if (arr[mid] < x)
    {
        return 0;
    }
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int y;
    cin >> y;
    for (int i = 1; i <= y; i++)
    {
        int val;
        cin >> val;
        int ans = -1;
        int l = 0, r = x - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isOk(mid, val) == 0)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        if (arr[ans] == val)
        {
            cout << "Yes" << " " << ans + 1 << "\n";
        }
        else
        {
            cout << "No" << " " << ans + 1 << "\n";
        }
    }

    return 0;
}
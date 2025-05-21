#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        cout << "Case " << t << ":" << "\n";
        while (b--)
        {
            int x, y;
            cin >> x >> y;
            int left = lower_bound(arr, arr + a, x) - arr;
            int right = upper_bound(arr, arr + a, y) - arr;
            cout << right - left << "\n";
        }
    }

    return 0;
}
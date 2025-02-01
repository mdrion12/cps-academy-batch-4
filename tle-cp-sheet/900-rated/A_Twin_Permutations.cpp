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
        int a;
        cin >> a;
        int arr[a + 1];
        int mx = INT_MIN;
        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int need = mx + 1;
        for (int i = 1; i <= a; i++)
        {
            int req = need - arr[i];
            cout << req << " ";
        }
        cout << "\n";
    }

    return 0;
}
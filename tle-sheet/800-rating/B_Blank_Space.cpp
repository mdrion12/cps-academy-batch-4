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
        int arr[a + 3];
        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
        }
        arr[a + 2] = 1;
        int sum = 0;
        int ans = 0;
        for (int i = 1; i <= a + 1; i++)
        {
            if (arr[i] == 0)
            {
                ans++;
            }
            else
            {

                sum = max(sum, ans);
                ans = 0;
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
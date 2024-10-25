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
        int m, n;
        cin >> m >> n;
        if (n > m)
        {
            swap(m, n);
        }
        if (n == 1 && m == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        int sum = (2 * (n - 1)) + (m - 1) + 1;
        cout << sum << "\n";
    }

    return 0;
}
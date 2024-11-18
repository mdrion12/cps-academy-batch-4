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
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        int value = 0;
        for (int j = 0; j < n; j++)
        {
            int x, y;
            cin >> x >> y;
            int res = k / x;
            value += res;
                }
        cout << "Case " << i << ": " << value << "\n";
    }

    return 0;
}

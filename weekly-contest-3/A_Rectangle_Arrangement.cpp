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
        int x;
        cin >> x;
        int max_a = INT_MIN;
        int max_b = INT_MIN;
        while (x--)
        {
            int a, b;
            cin >> a >> b;
            max_a = max(max_a, a);
            max_b = max(max_b, b);
        }
        cout << 2 * (max_a + max_b) << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << (2 * n + k - 1) / k << endl;
    }

    return 0;
}
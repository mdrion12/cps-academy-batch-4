#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    string x;
    cin >> x;

    int sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        sum += (x[i] - '0');
    }

    if (sum >= k)
    {
        cout << 0 << "\n";
        return 0;
    }

    sort(x.begin(), x.end());

    int ans = 0;
    int i = 0;
    while (sum < k)
    {
        sum = sum - (x[i] - '0') + 9;
        ans++;
        i++;
    }

    cout << ans << "\n";
    return 0;
}

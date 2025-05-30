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
        int n, k;
        cin >> n >> k;
        vector<int> v(k + 1);

        for (int i = 1; i <= k; i++)
        {
            cin >> v[i];
        }

        sort(v.begin() + 1, v.end());

        int madiff = 0;

        for (int i = 1; i < k; i++)
        {
            madiff = max(madiff, (v[i + 1] - v[i] + 1) / 2);
        }

        int first = v[1];
        int last = n - v[k] + 1;

        int result = max({madiff, first, last});
        cout << result << "\n";
    }

    return 0;
}

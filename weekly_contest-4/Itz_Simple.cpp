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
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> v(n);
        int sum = 0;
        int maximum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            maximum = max(maximum, v[i]);
        }

        int ved_height = k + maximum;
        int varun_height = p + (sum - maximum);

        if (ved_height == varun_height)
        {
            cout << "Equal" << "\n";
        }
        else if (ved_height > varun_height)
        {
            cout << "Ved" << "\n";
        }
        else
        {
            cout << "Varun" << "\n";
        }
    }

    return 0;
}

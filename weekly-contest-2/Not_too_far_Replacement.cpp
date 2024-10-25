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
        vector<int> v(a + 1);
        int sum = 0;
        for (int i = 0; i <= a; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.begin() + a);
        for (int i = 0; i < a; i++)
        {
            if (v[i] >= v[a] && v[i] <= (2 * v[a]))
            {
                swap(v[i], v[a]);
            }
        }
        sum -= v[a];
        cout << sum << "\n";
    }

    return 0;
}
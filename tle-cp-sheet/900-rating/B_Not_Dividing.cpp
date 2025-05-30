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
        vector<ll> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        if (v[0] == 1)
        {
            v[0]++;
        }
        for (int i = 1; i < a; i++)
        {
            if (v[i] == 1)
            {
                v[i]++;
            }
            if (v[i] % v[i - 1] == 0)
            {
                v[i] = v[i] + 1;
            }
        }
        for (int i = 0; i < a; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
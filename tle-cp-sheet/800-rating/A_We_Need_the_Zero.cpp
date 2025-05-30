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
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        bool f = false;
        for (int i = 0; i < 256; i++)
        {
            int sum = 0;
            for (int j = 0; j < v.size(); j++)
            {
                sum = sum ^ (v[j] ^ i);
            }
            if (sum == 0)
            {
                f = true;
                cout << i << "\n";
                break;
            }
        }
        if (f == false)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
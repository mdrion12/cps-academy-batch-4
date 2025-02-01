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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << "\n";
            cout << n << "\n";
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout << "\n";
        }
        else
        {
            vector<int> v;
            for (int i = 1; i <= k; i++)
            {
                if (i != x)
                {
                    v.push_back(i);
                }
            }
            bool f = false;
            int val = 0, rem = 0;
            int mainval = 0;
            for (int i = 0; i < v.size(); i++)
            {
                int value = n / v[i];
                int reminder = n % v[i];
                if (reminder != x)
                {
                    mainval = v[i];
                    val = value;
                    rem = reminder;
                    f = true;
                    break;
                }
            }
            if (f)
            {
                vector<int> res;
                for (int i = 0; i < val; i++)
                {
                    res.push_back(mainval);
                }
                if (rem > 0)
                {
                    res.push_back(rem);
                }
                cout << "YES" << "\n";
                cout << res.size() << "\n";
                for (int i = 0; i < res.size(); i++)
                {
                    cout << res[i] << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}
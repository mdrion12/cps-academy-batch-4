#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll sum = 0;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 1)
    {
        cout << "First" << "\n";
    }
    else
    {
        ll value = 0;
        bool x = false;
        for (int i = t - 1; i >= 0; i--)
        {
            sum -= v[i];
            value += v[i];
            if (sum % 2 == 1)
            {
                x = true;
                if (value % 2 == 0)
                {
                    cout << "Second" << "\n";
                }
                else
                {
                    cout << "First" << "\n";
                }
                break;
            }
        }
        if (x == false)
        {
            cout << "Second" << "\n";
        }
    }

    return 0;
}
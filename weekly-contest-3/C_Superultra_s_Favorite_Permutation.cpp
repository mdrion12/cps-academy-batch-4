#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 4)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> jor;
        vector<int> bijor;
        int sz = jor.size();
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                jor.push_back(i);
            }
            else
            {
                bijor.push_back(i);
            }
        }
        bool f = false;
        int track = 0;
        for (int i = 0; i < bijor.size(); i++)
        {
            if (!(is_prime(jor[sz - 1] + bijor[i])))
            {
                track = bijor[i];
                f = true;
                break;
            }
        }
        if (f)
        {
            for (int i = 0; i < jor.size(); i++)
            {
                cout << jor[i] << " ";
            }
            cout << track << " ";
            for (int i = 0; i < bijor.size(); i++)
            {
                if (track != bijor[i])
                {
                    cout << bijor[i] << " ";
                }
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}

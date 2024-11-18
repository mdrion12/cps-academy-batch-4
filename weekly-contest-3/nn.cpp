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
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            if (b % 2 == 0)
            {
                cout << "Case " << i << ":" << " Oddius" << "\n";
            }
            else
            {
                cout << "Case " << i << ":" << " Evenius" << "\n";
            }
        }
        else
        {
            cout << "Case " << i << ":" << " Oddius" << "\n";
        }
        // if (a = 1 && b == 1)
        // {
        //     cout << "Case " << i << ":" << " Evenius" << "\n";
        // }
        // else
        // {
        //     cout << "Case " << i << ":" << " Oddius" << "\n";
        // }
    }

    return 0;
}
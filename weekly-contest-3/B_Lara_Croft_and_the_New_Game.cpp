#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll row, col, k;
    cin >> row >> col >> k;
    if (col == 2)
    {
        k -= row;
        ll value = row - k;
        cout << value << " " << 2 << "\n";
    }
    else if (row >= k)
    {
        cout << (1 + k) << " " << 1 << "\n";
    }
    else
    {
        k -= col;
        col -= 1;
        if (k % col == 0)
        {
            ll value = k / col;
            if (value % 2 == 0)
            {
                cout << abs(row - value) + 1 << " " << col << "\n";
            }
            else
            {
                cout << abs(row - value) + 1 << " " << 2 << "\n";
            }
        }
        else
        {
            ll value = k / col;
            ll rem = k % col;
            if ((value + 1) % 2 == 0)
            {
                cout << abs(row - (value + 1)) << " " << abs(2 + rem) << "\n";
            }
            else
            {
                cout << abs(row - (value + 1)) << " " << abs(col - rem) + 1 << "\n";
            }
        }
    }

    return 0;
}
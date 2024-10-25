#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        int x;
        cin >> x;
        int i = 9;
        vector<int> v;
        while (x != 0)
        {
            if (x >= i)
            {
                x -= i;
                v.push_back(i);

                i--;
            }
            else
            {
                v.push_back(x);
                x = 0;
            }
        }
        reverse(v.begin(), v.end());
        for (auto it : v)
        {
            cout << it;
        }
        cout << "\n";
    }

    return 0;
}
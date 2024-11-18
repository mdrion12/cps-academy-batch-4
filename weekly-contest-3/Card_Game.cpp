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
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = 1; i <= a; i++)
        {
            if (i == b)
            {
                continue;
            }
            else
            {
                if ((i + b) % 2 == 0)
                {
                    count++;
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}
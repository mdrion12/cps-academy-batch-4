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
        map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            int v;
            cin >> v;
            mp[v]++;
        }
        int m1 = mp[-1];
        int p1 = mp[1];
        // first jog
        int count = 0;
        if (p1 >= m1)
        {
            if (m1 % 2 != 0)
            {
                count += m1 % 2;
            }
        }
        else if (m1 > p1)
        {
            if (a % 2 == 0)
            {
                int rem = a / 2;
                int req = rem - p1;

                m1 -= req;
                if (m1 % 2 != 0)
                {
                    count += 1;
                }
                count += req;
            }
            else
            {
                int rem = (a + 1) / 2;
                int req = rem - p1;
                m1 -= req;
                if (m1 % 2 != 0)
                {
                    count += 1;
                }
                count += req;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
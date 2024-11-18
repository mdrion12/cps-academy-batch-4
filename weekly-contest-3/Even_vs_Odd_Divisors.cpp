#include <bits/stdc++.h>
using namespace std;
#define ll long long

void divisors(int n, vector<int> &v)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }
}

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

        vector<int> v;
        divisors(a, v);

        int count1 = 0, count2 = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        if (count1 == count2)
        {
            cout << 0 << "\n";
        }
        else if (count1 > count2)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}

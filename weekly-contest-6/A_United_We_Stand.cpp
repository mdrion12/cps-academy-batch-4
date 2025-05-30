#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> divisors(int n)
{
    vector<int> divisor;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (i != n / i)
            {
                divisor.push_back(n / i);
            }
        }
    }
    return divisor;
}
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
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
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
        int n;
        cin >> n;
        int v[n];
        vector<int> b, c;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v, v + n);
        if (mp.size() == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        else
        {
            int count = 0;
            for (auto it : mp)
            {
                if (count == 0)
                {
                    for (int i = 0; i < it.second; i++)
                    {
                        b.push_back(it.first);
                    }
                }
                else
                {
                    for (int i = 0; i < it.second; i++)
                    {
                        c.push_back(it.first);
                    }
                }
                count++;
            }
        }
        cout << b.size() << " " << c.size() << "\n";
        for (auto it : b)
        {
            cout << it << " ";
        }
        cout << "\n";
        for (auto it : c)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}
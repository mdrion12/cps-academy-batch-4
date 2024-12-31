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
        int a;
        cin >> a;
        vector<int> v(a);
        map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        bool f = false;
        if (mp.size() == 1)
        {
            f = true;
        }
        else if (mp.size() == 2)
        {
            int val1 = 0, val2 = 0;
            for (auto it : mp)
            {
                if (val1 == 0)
                {
                    val1 = it.second;
                }
                else
                {
                    val2 = it.second;
                }
            }
            if (a % 2 == 1)
            {
                if (val1 - 1 == val2 || val2 - 1 == val1)
                {
                    f = true;
                }
            }
            else
            {
                if (val1 == val2)
                {
                    f = true;
                }
            }
        }
        if (f)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}
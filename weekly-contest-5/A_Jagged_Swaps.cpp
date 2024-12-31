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
bool is_sorted(vector<int> v)
{
    bool f = true;
    for (int i = 1; i <= v.size() - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            continue;
        }
        else
        {
            f = false;
        }
    }
    return f;
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
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        if (v[0] == 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
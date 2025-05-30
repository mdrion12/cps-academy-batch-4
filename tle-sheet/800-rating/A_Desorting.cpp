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
bool issorted(vector<int> v)
{
    bool f = false;
    for (int i = 0; i < v.size() - 2; i++)
    {

        if (v[i] > v[i + 1])
        {
            bool f = true;
            break;
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
        int x;
        cin >> x;
        vector<int> v(x);
        bool f = true;
        int diff = INT_MAX;
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
            if (i > 0)
            {
                if (v[i] < v[i - 1])
                {
                    f = false;
                }
                diff = min(v[i] - v[i - 1], diff);
            }
        }
        if (f == false)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << diff / 2 + 1 << "\n";
        }
    }

    return 0;
}
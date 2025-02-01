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
        ll n;
        cin >> n;
        ll a[n + 1];
        ll i, j;
        for (i = 0; i < n; i++)
            cin >> a[i];
        bool f = false;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (__gcd(a[i], a[j]) <= 2)
                {

                    f = true;
                }
            }
        }
        if (f)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
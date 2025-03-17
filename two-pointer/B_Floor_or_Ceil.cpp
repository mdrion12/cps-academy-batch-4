#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
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
        int x, n, m;
        cin >> x >> n >> m;
        int y = x;
        n = min(n, 30), m = min(m, 30);
        for (int i = 1; i <= n; i++)
        {
            x = x / 2;
        }
        for (int i = 1; i <= m; i++)
        {
            x = (x + 1) / 2;
        }
        for (int i = 1; i <= m; i++)
        {
            y = (y + 1) / 2;
        }
        for (int i = 1; i <= n; i++)
        {
            y = y / 2;
        }
        cout << min(x, y) << " " << max(x, y) << "\n";
    }

    return 0;
}
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

        int n, m, k;
        cin >> n >> m >> k;
        int i = 1;
        int prev = INT_MAX;
        while (1)
        {

            if (i == 1)
            {
                if (n > m)
                {
                    prev = min(n, k);

                    n -= min(n, k);
                }
                else
                {
                    prev = min(m, k);

                    m -= min(m, k);
                }
            }
            else
            {

                int mx = max(n, m);

                if (prev < mx)
                {
                    if (n >= m)
                    {

                        n -= mx;
                    }
                    else
                    {

                        m -= mx;
                    }

                    prev = mx;
                }
                else
                {
                    break;
                }
            }
            i++;
        }
        if (i % 2 == 0)
        {
            cout << "Alice" << "\n";
        }
        else
        {
            cout << "Bob" << "\n";
        }
    }

    return 0;
}
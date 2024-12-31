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
        int value;
        cin >> value;
        if (value == 1)
        {
            cout << 1 << "\n";
        }
        else if (value == 2)
        {
            cout << 2 << "\n";
        }
        else if (value == 3)
        {
            cout << 2 << "\n";
        }
        else if (value == 4)
        {
            cout << 2 << "\n";
        }

        else
        {
            int cur = 4;
            int ans = 2;
            while (cur < value)
            {
                cur++;
                ans++;
                cur = cur * 2;
            }
            cout << ans << "\n";
        }
    }

    return 0;
}
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
        int m[a + 1];
        int s[a + 1];
        for (int i = 1; i <= a; i++)
        {
            cin >> m[i];
        }
        for (int i = 1; i <= a; i++)
        {
            cin >> s[i];
        }
        int maxm = 0;
        for (int i = 1; i <= a; i++)
        {
            if (i == a)
            {
                maxm += m[i];
            }
            else if (i + 1 <= a && (m[i] - s[i + 1]) > 0)
            {
                maxm += m[i] - s[i + 1];
            }
        }
        cout << maxm << "\n";
    }

    return 0;
}
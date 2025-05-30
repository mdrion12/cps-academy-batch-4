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
        string s;
        cin >> s;
        bool f = false;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                count++;
                if (i + 1 < s.size() && s[i + 1] == '.')
                {
                    if (i + 2 < s.size() && s[i + 2] == '.')
                    {
                        f = true;
                    }
                }
            }
        }
        if (f)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << count << "\n";
        }
    }
    return 0;
}

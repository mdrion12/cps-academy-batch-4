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

    string s;
    cin >> s;
    char prev = s[0];

    int ans = 0;
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev)
        {
            count++;
        }
        else
        {
            ans = max(count, ans);
            count = 1;
            prev = s[i];
        }
    }
    ans = max(count, ans);
    if (ans >= 7)
    {

        yes
    }
    else
    {

        no
    }

    return 0;
}
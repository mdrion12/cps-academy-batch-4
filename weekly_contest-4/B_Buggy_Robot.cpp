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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    int l = mp['L'];
    int r = mp['R'];
    int u = mp['U'];
    int d = mp['D'];
    int min1 = min(l, r);
    int min2 = min(u, d);
    int sum = (min1 * 2) + (min2 * 2);
    cout << sum << "\n";
    return 0;
}
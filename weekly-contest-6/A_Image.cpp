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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        map<char, int> mp;
        for (int i = 0; i < 4; i++)
        {
            if (i < 2)
            {
                mp[s1[i]]++;
            }
            else
            {
                mp[s2[i - 2]]++;
            }
        }
        if (mp.size() == 3)
        {
            cout << 2 << "\n";
        }
        else if (mp.size() == 1)
        {
            cout << 0 << "\n";
        }
        else if (mp.size() == 4)
        {
            cout << 3 << "\n";
        }
        if (mp.size() == 2)
        {
            cout << 1 << "\n";
        }
    }

    return 0;
}
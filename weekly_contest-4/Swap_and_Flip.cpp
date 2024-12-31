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
        string s1, s2;
        cin >> s1;
        cin.ignore();
        cin >> s2;
        int count0 = 0, count1 = 0;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
            if (s2[i] == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        if ((min(count0, count1) == min(c0, c1)) && (max(count0, count1) == max(c0, c1)))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
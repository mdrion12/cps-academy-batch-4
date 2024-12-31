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
    string s;
    cin >> s;
    if (s.size() < 7)
    {
        cout << "no" << "\n";
    }
    else
    {
        bool f = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                int count0 = 0;
                for (int j = i; j < s.size(); j++)
                {
                    if (s[j] == '0')
                    {
                        count0++;
                    }
                }
                if (count0 >= 6)
                {
                    f = true;
                    break;
                }
            }
            if (f)
            {
                break;
            }
        }
        if (f)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }

    return 0;
}
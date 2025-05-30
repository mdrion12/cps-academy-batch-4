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
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vector<int> ans;
        int index = -1;
        bool f = false;
        int value = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {

                f = true;
                break;
            }
            if (s[i] == '1')
            {
                index = i;
                break;
            }
        }
        if (f)
        {
            cout << value << "\n";
            continue;
        }
        for (int i = index + 1; i < n; i++)
        {
            if (s[i] == '0' && s[i - 1] == '1')
            {
                s[i] = '1';
                ans.push_back(i);
                f = true;
            }
        }
        for (int i = n - 1; i > index; i--)
        {
            if (t[i] == '0' && s[i] == '1')
            {
                s[i] = '0';
                ans.push_back(i);
            }
        }
        if (s == t)
        {
            cout << ans.size() << "\n";
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
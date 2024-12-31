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
        int x;
        cin >> x;
        vector<int> a(x), b(x);
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> ma;
        for (int i = 0; i < x; i++)
        {

            ma.push_back({a[i], b[i]});
        }
        sort(ma.begin(), ma.end());
        pair<int, int> m1 = ma.back();
        ma.pop_back();
        pair<int, int> m2 = ma.back();
        ma.pop_back();
        if (m1.second != m2.second)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}
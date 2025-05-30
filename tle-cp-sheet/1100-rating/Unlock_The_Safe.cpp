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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {

            cin >> b[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                int minimum = a[i] - b[i];
                int second = b[i] + (9 - a[i]);
                ans += min(minimum, second);
            }
            else if (a[i] < b[i])
            {
                int mn = b[i] - a[i];
                int sc = a[i] + (9 - b[i]);
                ans += min(mn, sc);
            }
        }
        ll r = k - ans;
        if (r < 0)
        {
            cout << "No" << "\n";
        }
        else
        {
            if (r % 2 == 0)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
        }
    }

    return 0;
}
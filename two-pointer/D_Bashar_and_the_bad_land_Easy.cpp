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

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    int sum = 0;
    int ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];
        if (sum >= m)
        {
            ans = min(ans, r - l + 1);
            while (sum >= m)
            {
                sum -= v[l];
                ans = min(ans, r - l + 1);
                l++;
            }
        }
        r++;
    }
    if (ans == INT_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans << "\n";
    }
    return 0;
}
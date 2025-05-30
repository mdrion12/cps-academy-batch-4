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
void done()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    vector<int> reo(t);
    int mx = 2;

    for (int i = 0; i < t; ++i)
    {
        cin >> reo[i];
        mx = max(mx, reo[i]);
    }

    vector<int> sieve(mx + 1, 1);
    sieve[0] = sieve[1] = 0;
    vector<int> primes;

    for (int i = 2; i <= mx; ++i)
    {
        if (sieve[i])
        {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= mx; j += i)
                sieve[j] = 0;
        }
    }

    for (int n : reo)
    {
        int ans = 0;
        for (int p : primes)
        {
            if (p > n)
                break;
            ans += n / p;
        }
        cout << ans << "\n";
    }
}

int main()
{
    done();
    return 0;
}
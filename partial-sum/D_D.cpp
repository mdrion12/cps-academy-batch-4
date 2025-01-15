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

    int n;
    cin >> n;
    vector<ll> v(n + 1), spref(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        spref[i] = v[i];
        v[i] += v[i - 1];
    }
    sort(spref.begin(), spref.end());
    for (int i = 1; i <= n; i++)
    {
        spref[i] += spref[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << v[c] - v[b - 1] << "\n";
        }
        else if (a == 2)
        {
            cout << spref[c] - spref[b - 1] << "\n";
        }
    }

    return 0;
}
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

    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    int sum = 0;
    bool f = false;
    int rem = 0;
    for (auto it : v)
    {
        it += rem;
        if (it > 8)
        {
            sum += 8;
            rem = it - 8;
        }
        else
        {
            sum += it;
            rem = 0;
        }
        i++;
        if (sum >= b)
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        cout << i << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}
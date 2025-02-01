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
        int a, b;
        cin >> a >> b;
        ll ans = 0;
        int r = 0, rr = 0;
        int z = 0, zz = 0;
        int k = 0;
        while (a--)
        {

            if (k == 0)
            {
                int x, y;
                cin >> x >> y;
                z += x;
                zz += y;
                r += x + b;
                rr += y + b;
                k++;
                continue;
            }
            else
            {
                int x, y;
                cin >> x >> y;
                z += x;
                zz += y;
                r += +b;
                rr += +b;
                int v1 = z + b;
                int v2 = zz + b;
                int x1 = abs(r - v1);
                int x2 = abs(rr - v2);
                ans += (x1 + x2) * k;
                k++;
            }
        }
        ll result = a * (4 * b);
        result -= ans;
        cout << result << "\n";
    }

    return 0;
}
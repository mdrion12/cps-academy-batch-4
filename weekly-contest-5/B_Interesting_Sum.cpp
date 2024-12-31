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
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int l1 = v[a - 1];
        int l2 = v[a - 2];
        int s1 = v[0];
        int s2 = v[1];
        int value = (l1 - s1) + (l2 - s2);
        cout << value << "\n";
    }

    return 0;
}
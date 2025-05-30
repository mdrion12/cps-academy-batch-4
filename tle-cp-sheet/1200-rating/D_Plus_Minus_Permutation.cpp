#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

long long range_sum(long long l, long long r)
{
    if (l > r)
        return 0;
    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long l = lcm(x, y);
        long long plus = n / x - n / l;
        long long minus = n / y - n / l;
        cout << range_sum(n - plus + 1, n) - range_sum(1, minus) << endl;
    }
    return 0;
}

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

    int N, C;
    cin >> N >> C;

    vector<int> times(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> times[i];
    }

    int candies = 1;
    int last_candy_time = times[0];

    for (int i = 1; i < N; ++i)
    {
        if (times[i] - last_candy_time >= C)
        {
            candies++;
            last_candy_time = times[i];
        }
    }

    cout << candies << endl;

    return 0;
}
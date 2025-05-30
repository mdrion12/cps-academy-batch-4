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

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    int v[a][7];

    // Take input as strings and process them
    for (int i = 0; i < a; i++)
    {
        string row;
        cin >> row; // Take input as a string
        for (int j = 0; j < 7; j++)
        {
            v[i][j] = row[j] - '0'; // Convert char to int
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        int count = 0;
        for (int j = 0; j < a; j++)
        {
            if (v[j][i] == 1)
            {
                count++;
            }
        }
        ans = max(ans, count);
    }
    cout << ans << "\n";

    return 0;
}
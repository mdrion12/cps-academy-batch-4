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

    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    priority_queue<int> pq;
    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
        cnt++;
        if (ar[i] < 0)
            pq.push(-ar[i]);
        while (sum < 0)
        {
            sum += pq.top();
            pq.pop();
            cnt--;
        }
    }
    cout << cnt << endl;
    return 0;
}
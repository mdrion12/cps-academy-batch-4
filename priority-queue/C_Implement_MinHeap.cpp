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
    priority_queue<int, vector<int>, greater<int>> pq;
    while (t--)
    {
        string x;
        cin >> x;
        if (x == "insert")
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        else if (x == "getMin")
        {
            if (!(pq.empty()))
            {
                cout << pq.top() << "\n";
            }
            else
            {
                cout << "Empty" << "\n";
            }
        }
        else if (x == "delMin")
        {
            if (!(pq.empty()))
            {
                pq.pop();
            }
        }
    }

    return 0;
}
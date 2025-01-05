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

    int q;
    cin >> q;
    stack<int> s;
    stack<int> maximum;
    while (q--)
    {

        int a;
        cin >> a;
        if (a == 1)
        {
            int v;
            cin >> v;
            s.push(v);
            if (maximum.empty() == true || v >= maximum.top())
            {
                maximum.push(v);
            }
        }
        else if (a == 2)
        {
            if (!(s.empty()))
            {

                if (maximum.top() == s.top())
                {
                    maximum.pop();
                }
                s.pop();
            }
        }
        else if (a == 3)
        {
            if (!(maximum.empty()))
            {
                cout << maximum.top() << "\n";
            }
        }
    }

    return 0;
}
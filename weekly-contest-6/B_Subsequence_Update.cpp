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
        int a, b, c;
        cin >> a >> b >> c;
        int arr[a + 1];
        int req = c - b + 1;
        int rr[req + 1] = {0};
        ll sum = 0;

        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
            if (i >= b && i <= c)
            {
                rr[i - b] = arr[i];
                sum += arr[i];
            }
        }

        sort(rr, rr + req);
        sort(arr + 1, arr + b);
        sort(arr + c + 1, arr + a + 1);

        int l = req - 1;
        int r = 1;
        ll sum1 = sum;

        while (l >= 0 && r < b)
        {
            if (arr[r] < rr[l])
            {
                sum1 -= rr[l];
                sum1 += arr[r];
                r++;
                l--;
            }
            else
            {
                r++;
            }
        }

        l = req - 1;
        r = c + 1;
        ll sum2 = sum;

        while (l >= 0 && r <= a)
        {
            if (rr[l] > arr[r])
            {
                sum2 -= rr[l];
                sum2 += arr[r];
                l--;
                r++;
            }
            else
            {
                r++;
            }
        }

        cout << min({sum, sum1, sum2}) << "\n";
    }

    return 0;
}
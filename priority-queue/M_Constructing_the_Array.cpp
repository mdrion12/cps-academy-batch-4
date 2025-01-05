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
        int n;
        cin >> n;
        priority_queue<pair<int, pair<int, int>>> pq;
        vector<int> arr(n, 0);
        int left = 0, right = n - 1;
        pq.push({n, {-left, -right}});
        int count = 1;
        while (!pq.empty())
        {
            pair<int, pair<int, int>> v = pq.top();
            pq.pop();
            pair<int, int> p = v.second;
            int l = -p.first;
            int r = -p.second;
            int val = r - l + 1;
            if (val % 2 == 0)
            {
                int mid = l + (r - l) / 2; // Corrected mid calculation
                arr[mid] = count;
                count++;
                if (l < mid)
                    pq.push({(mid - l), {-l, -(mid - 1)}});
                if (r > mid)
                    pq.push({(r - mid), {-(mid + 1), -r}});
            }
            else
            {
                int mid = l + (r - l) / 2; // Corrected mid calculation
                arr[mid] = count;
                count++;
                if (l < mid)
                    pq.push({(mid - l), {-l, -(mid - 1)}});
                if (r > mid)
                    pq.push({(r - mid), {-(mid + 1), -r}});
            }
        }
        for (auto it : arr)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}

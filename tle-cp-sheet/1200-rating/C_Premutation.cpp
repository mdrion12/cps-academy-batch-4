#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
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
        int v[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<int> ans1, ans2;
        int index = 0;
        for (int i = 0; i < 1; i++)
        {

            map<int, int> mp;
            for (int j = 0; j < n; j++)
            {
                mp[v[j][i]]++;
            }
            int mx = INT_MIN;
            int value = 0;
            for (auto it : mp)
            {
                if (mx < it.second)
                {
                    mx = it.second;
                    value = it.first;
                }
            }

            if (mx >= n - 1)
            {
                for (int i = 0; i < 1; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (v[j][i] != value)
                        {
                            ans1.push_back(value);
                            index = j;
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans1.push_back(v[index][i]);
        }
        for (auto it : ans1)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}
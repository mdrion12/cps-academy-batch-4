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
        int l = n;
        n = n * (n - 1) / 2;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            st.insert(v);
        }
        vector<int> ans;
        for (auto it : st)
        {
            ans.push_back(it);
        }
        int valu = ans[ans.size() - 1];
        for (auto it : ans)
        {
            cout << it << " ";
        }
        if (ans.size() < l)
        {
            for (int i = 0; i < l - ans.size(); i++)
            {
                cout << valu << " ";
            }
        }
        cout << "\n"; 
    }

    return 0;
}
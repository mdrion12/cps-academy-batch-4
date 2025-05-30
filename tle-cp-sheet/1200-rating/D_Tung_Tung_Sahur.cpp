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

class st
{
public:
    char c;
    int cnt;
};

vector<st> str(const string &s)
{
    vector<st> groups;
    int n = s.size();
    if (n == 0)
        return groups;

    char cur = s[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == cur)
        {
            count++;
        }
        else
        {
            groups.push_back({cur, count});
            cur = s[i];
            count = 1;
        }
    }
    groups.push_back({cur, count});
    return groups;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;

        if (s.size() < p.size() || s.size() > 2 * p.size())
        {
            cout << "NO" << "\n";
            continue;
        }

        vector<st> grp = str(p);
        vector<st> grs = str(s);

        if (grp.size() != grs.size())
        {
            cout << "NO" << "\n";
            continue;
        }

        bool f = true;
        for (size_t i = 0; i < grp.size(); i++)
        {
            if (grp[i].c != grs[i].c)
            {
                f = false;
                break;
            }

            if (grs[i].cnt < grp[i].cnt || grs[i].cnt > 2 * grp[i].cnt)
            {
                f = false;
                break;
            }
        }

        if (f)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
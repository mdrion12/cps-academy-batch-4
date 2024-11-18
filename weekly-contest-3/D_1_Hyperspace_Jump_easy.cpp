#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    vector<pair<ll, ll>> v(t);

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        string a = "", b = "", c = "";
        int stage = 0;

        for (char ch : s)
        {
            if (ch == '(' || ch == '+' || ch == ')' || ch == '/')
            {
                if (ch == '+')
                    stage = 1;
                else if (ch == '/')
                    stage = 2;
            }
            else
            {
                if (stage == 0)
                    a += ch;
                else if (stage == 1)
                    b += ch;
                else if (stage == 2)
                    c += ch;
            }
        }

        int va = stoi(a);
        int vb = stoi(b);
        int vc = stoi(c);

        ll numerator = va + vb;
        ll denominator = vc;

        ll g = gcd(numerator, denominator);

        numerator /= g;
        denominator /= g;

        v[i] = {numerator, denominator};
    }

    map<pair<ll, ll>, int> mp;

    for (int i = 0; i < t; i++)
    {
        mp[v[i]]++;
    }

    for (int i = 0; i < t; i++)
    {
        cout << mp[v[i]] << " ";
    }

    return 0;
}

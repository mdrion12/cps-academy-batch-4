#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

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
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int ln = -l;
        int lf, rt;

        if (m < ln)
        {
            lf = m;
        }
        else
        {
            lf = ln;
        }

        rt = m - lf;

        cout << -lf << " " << rt << endl;
    }

    return 0;
}
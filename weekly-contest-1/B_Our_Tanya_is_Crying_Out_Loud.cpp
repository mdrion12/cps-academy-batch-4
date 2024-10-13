// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// unordered_map<ll, ll> v;
// int mincost(ll n, ll k, ll a, ll b)
// {
//     ll sum = 0;
//     if (n == 1)
//     {
//         return 0;
//     }
//     if (v.find(n) != v.end())
//     {
//         sum += v[n];
//         return sum;
//     }
//     if (n % k == 0)
//     {
//         int op1 = mincost(n - 1, k, a, b) + a;
//         int op2 = mincost(n / k, k, a, b) + b;
//         sum += min(op1, op2);
//         return v[n] = sum;
//     }
//     else
//     {
//         int op1 = mincost(n - 1, k, a, b) + a;
//         sum += op1;
//         return v[n] = sum;
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n, k, a, b;
//     cin >> n >> k >> a >> b;
//     ll value = mincost(n, k, a, b);
//     cout << value << "\n";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
long long m, k, A, B, c;
int main()
{
    cin >> m >> k >> A >> B;
    if (k > 1)
        while ((((m / k)) * A * (k - 1)) > B)
        {

            c += (m % k) * A + B;
            m /= k;
        }
    c += (m - 1) * A;
    cout << c;
    return 0;
}
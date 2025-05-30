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

    int T;
    cin >> T;

    while (T--)
    {
        int N, K, D;
        cin >> N >> K >> D;

        vector<int> T_arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> T_arr[i];
        }

        sort(T_arr.begin(), T_arr.end());

        long long totalPlucks = 0;
        int M = N - K;
        if (M < 0)
            M = 0;

        for (int i = 0; i < M; i++)
        {
            totalPlucks += ((D - 1) / T_arr[i]) + 1;
        }

        cout << totalPlucks << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> div(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
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
        int k;
        cin >> k;

        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        k -= 2; // Adjust k to exclude n and m

        if (k == 1)
        {
            cout << 1 << " " << 1 << "\n";
            continue;
        }

        vector<int> divi = div(k); // Get all divisors of k
        int n = -1, m = -1;

        for (int i = 0; i < divi.size(); i++)
        {
            int x = divi[i];
            int y = k / x;

            // Check if both x and y are in the input array
            if (find(v.begin(), v.end(), x) != v.end() && find(v.begin(), v.end(), y) != v.end())
            {
                n = x;
                m = y;
                break;
            }
        }

        cout << n << " " << m << "\n";
    }

    return 0;
}

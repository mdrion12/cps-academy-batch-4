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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int lcm_of_vector(const vector<int> &arr)
{
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); i++)
    {
        result = lcm(result, arr[i]);
    }
    return result;
}

int gcd_of_vector(const vector<int> &arr)
{
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); i++)
    {
        result = gcd(result, arr[i]);
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    vector<int> tasrif(a), boys(b);
    for (int i = 0; i < a; i++)
    {
        cin >> tasrif[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> boys[i];
    }

    int lcm_tasrif = lcm_of_vector(tasrif);

    int gcd_boys = gcd_of_vector(boys);

    vector<int> factors = divisors(gcd_boys);

    int count = 0;
    for (int factor : factors)
    {
        if (factor >= lcm_tasrif)
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}

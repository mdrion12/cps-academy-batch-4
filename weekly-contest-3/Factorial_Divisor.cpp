#include <iostream>
#include <map>
using namespace std;

map<int, int> prime_factors(int d)
{
    map<int, int> factors;
    for (int i = 2; i * i <= d; i++)
    {
        while (d % i == 0)
        {
            factors[i]++;
            d /= i;
        }
    }
    if (d > 1)
    {
        factors[d]++;
    }
    return factors;
}

int count_prime_in_factorial(int n, int p)
{
    int count = 0;
    while (n > 0)
    {
        n /= p;
        count += n;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        map<int, int> factors = prime_factors(d);

        bool divisible = true;
        for (auto factor : factors)
        {
            int prime = factor.first;
            int required_count = factor.second;

            int count_in_factorial = count_prime_in_factorial(n, prime);

            if (count_in_factorial < required_count)
            {
                divisible = false;
                break;
            }
        }
        // Output result
        if (divisible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

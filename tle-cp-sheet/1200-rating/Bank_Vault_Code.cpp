#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n < 100000 || n > 999999)
    {
        cout << "Invalid Code\n"; 
        return 0;
    }

    if (is_prime(n))
    {
        cout << "Valid Code\n";
    }
    else
    {
        cout << "Invalid Code\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int mod_pow(int a, int b, int mod)
{
    int result = 1;
    int base = a;

    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * base) % mod;
        }

        base = (base * base) % mod;
        b >>= 1;
    }

    return result;
}

int main()
{
    int N, M, Y;
    cin >> N >> M >> Y;
    Y %= M;

    bool found = false;

    for (int i = 0; i < M; ++i)
    {
        if (mod_pow(i, N, M) == Y)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }

    return 0;
}

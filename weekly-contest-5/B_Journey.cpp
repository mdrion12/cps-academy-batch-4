#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll cycle_sum = a + b + c;                  // তিন দিনের যোগফল
        ll full_cycles = n / cycle_sum;            // পূর্ণ চক্রের সংখ্যা
        ll total_walked = full_cycles * cycle_sum; // পূর্ণ চক্রে হাঁটা

        ll days = full_cycles * 3; // পূর্ণ চক্রের দিন

        // অবশিষ্ট হাঁটার দূরত্ব
        if (total_walked >= n)
        {
            cout << days << "\n";
            continue;
        }
        if (total_walked + a >= n)
        {
            cout << days + 1 << "\n";
            continue;
        }
        if (total_walked + a + b >= n)
        {
            cout << days + 2 << "\n";
            continue;
        }
        cout << days + 3 << "\n";
    }

    return 0;
}

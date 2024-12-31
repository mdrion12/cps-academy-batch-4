#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n, k;
        cin >> n >> k; // Length of array and the integer k
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i]; // Input array elements
        }

        bool found = false;
        int index = -1;

        // Check for any valid index i
        for (int i = 0; i < n; ++i)
        {
            bool valid = true;
            for (int j = 0; j < n; ++j)
            {
                if (i != j)
                {
                    if (abs(a[i] - a[j]) % k == 0)
                    {
                        valid = false;
                        break;
                    }
                }
            }
            if (valid)
            {
                found = true;
                index = i + 1; // Store 1-based index
                break;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
            cout << index << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

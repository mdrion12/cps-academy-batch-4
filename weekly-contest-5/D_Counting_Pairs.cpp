#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long total_sum = accumulate(a.begin(), a.end(), 0LL);
        long long min_sum = total_sum - y;
        long long max_sum = total_sum - x;

        // Sort the array for efficient pairing
        sort(a.begin(), a.end());

        int count = 0;

        // Use two pointers to count valid pairs
        for (int i = 0; i < n; ++i)
        {
            long long lower_bound = min_sum - a[i];
            long long upper_bound = max_sum - a[i];

            // Use binary search to find the valid range for a[j]
            int low = i + 1, high = n - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (a[mid] < lower_bound)
                {
                    low = mid + 1;
                }
                else if (a[mid] > upper_bound)
                {
                    high = mid - 1;
                }
                else
                {
                    count++;
                    break;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int countNormalSubarrays(const vector<int> &A)
{
    int n = A.size();
    int count = 0;

    // Iterate over all possible starting points
    for (int start = 0; start < n; ++start)
    {
        int sum = 0;
        int ones = 0;
        int twos = 0;

        // Expand the subarray from the starting point
        for (int end = start; end < n; ++end)
        {
            sum += A[end];

            // Count number of ones and twos
            if (A[end] == 1)
                ones++;
            if (A[end] == 2)
                twos++;

            // Length of the current subarray
            int length = end - start + 1;

            // Determine the median
            int median;
            if (length % 2 == 1)
            { // Odd length
                median = (ones > twos) ? 1 : 2;
            }
            else
            {               // Even length
                median = 1; // For our input constraint, since we're looking at left median
            }

            // Check if mean equals median
            if (sum == median * length)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        cout << countNormalSubarrays(A) << "\n";
    }

    return 0;
}

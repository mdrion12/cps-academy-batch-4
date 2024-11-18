#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ids(n);
        map<int, int> count; // Count the frequency of each cave ID

        for (int i = 0; i < n; i++)
        {
            cin >> ids[i];
            count[ids[i]]++; // Count frequency of each ID
        }

        // DP array to store maximum reachable caves starting from each ID
        map<int, int> dp;
        int maxCaves = 1; // Minimum caves to visit is 1

        // Traverse from smallest to largest to utilize divisors properly
        for (auto &entry : count)
        {
            int id = entry.first;
            dp[id] = count[id]; // Start with the count of the current ID

            // Check for multiples of id
            for (int multiple = 2 * id; multiple <= 100000; multiple += id)
            {
                if (count.find(multiple) != count.end())
                {
                    dp[multiple] = max(dp[multiple], dp[id] + count[multiple]);
                }
            }

            // Update the maximum caves that can be visited
            maxCaves = max(maxCaves, dp[id]);
        }

        cout << maxCaves << endl;
    }
    return 0;
}

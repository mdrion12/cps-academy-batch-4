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
        string s;
        cin >> s;

        int n = s.size();
        vector<int> prefix_1(n + 1, 0), suffix_1(n + 2, 0);

        for (int i = 1; i <= n; i++)
        {
            prefix_1[i] = prefix_1[i - 1] + (s[i - 1] == '1');
        }

        for (int i = n; i >= 1; i--)
        {
            suffix_1[i] = suffix_1[i + 1] + (s[i - 1] == '1');
        }

        int min_operations = INT_MAX;

        for (int i = 0; i <= n; i++)
        {

            int flips1 = prefix_1[i] + (n - i - suffix_1[i + 1]);

            int flips2 = i - prefix_1[i] + suffix_1[i + 1];

            min_operations = min({min_operations, flips1, flips2});
        }

        cout << min_operations << "\n";
    }

    return 0;
}

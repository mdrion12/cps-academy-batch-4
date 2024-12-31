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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m), q(k);
        for (int i = 0; i < m; ++i)
            cin >> a[i];
        for (int i = 0; i < k; ++i)
            cin >> q[i];

        // Store known questions in a set
        unordered_set<int> known(q.begin(), q.end());

        // Result string for this test case
        string result;
        for (int i = 0; i < m; ++i)
        {
            // If Monocarp knows the question that is excluded (a[i]), he will pass
            result += (known.find(a[i]) == known.end()) ? '1' : '0';
        }

        cout << result << "\n";
    }

    return 0;
}

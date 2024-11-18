#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v, v + n);

    // যদি k == 0 হয়, তবে x এমন একটি মান হবে যা সবগুলোর থেকে ছোট হবে
    if (k == 0)
    {
        if (v[0] > 1)
        {
            cout << 1 << "\n"; // এখানে আমরা x = 1 নিতে পারি
        }
        else
        {
            cout << -1 << "\n"; // কোনো বৈধ x পাওয়া যায়নি
        }
    }
    else
    {
        int value = v[k - 1]; // k-তম ছোট উপাদান নিলাম (0-based indexing)

        // যাচাই করছি, ঠিক kটি উপাদান যেন এই মানের চেয়ে ছোট বা সমান থাকে
        if (k == n || v[k] > value)
        {
            cout << value << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
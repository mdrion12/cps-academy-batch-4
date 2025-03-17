#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int left = 0, right = n - 1;
    int sum_left = 0, sum_right = 0;
    int max_candies = 0;

    while (left <= right)
    {
        if (sum_left < sum_right)
        {
            sum_left += w[left++];
        }
        else if (sum_right < sum_left)
        {
            sum_right += w[right--];
        }
        else
        {
            max_candies = max(max_candies, left + (n - 1 - right));
            sum_left += w[left++];
        }
    }
    if (sum_left == sum_right)
    {
        max_candies = max(max_candies, left + (n - 1 - right));
    }

    cout << max_candies << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

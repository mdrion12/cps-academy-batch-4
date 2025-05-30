#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // ছোট থেকে বড়তে সাজানো O(n log n)

    vector<ll> pref(n + 1, 0), suffix(n + 1, 0);

    // Prefix sum
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }

    // Suffix sum
    for (int i = n - 1; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + v[i];
    }

    ll total_sum = pref[n];
    ll maxsum = LLONG_MIN;

    for (int i = 0; i <= k; i++)
    {
        ll remove_smallest = pref[2 * i];        // প্রথম থেকে 2*i উপাদান বাদ
        ll remove_largest = suffix[n - (k - i)]; // শেষ থেকে (k - i) উপাদান বাদ
        ll remaining_sum = total_sum - (remove_smallest + remove_largest);
        maxsum = max(maxsum, remaining_sum);
    }

    cout << maxsum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

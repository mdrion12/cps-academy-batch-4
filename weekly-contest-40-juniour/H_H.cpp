#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int instability_after_removal_of_max = a[n - 2] - a[0];
    int instability_after_removal_of_min = a[n - 1] - a[1];

    cout << min(instability_after_removal_of_max, instability_after_removal_of_min) << "\n";

    return 0;
}

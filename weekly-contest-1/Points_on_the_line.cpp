#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, c;
    cin >> t >> c;
    vector<int> v(t);

    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int min_removals = t;

    for (int i = 0; i < t; i++)
    {
        for (int j = i; j < t; j++)
        {
            if (v[j] - v[i] <= c)
            {

                int kept_points = j - i + 1;

                int removed_points = t - kept_points;
                min_removals = min(min_removals, removed_points);
            }
        }
    }

    cout << min_removals << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> caves;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vector<int> a(k);
            for (int j = 0; j < k; j++)
            {
                cin >> a[j];
            }

            int b = 0;
            for (int j = 0; j < k; j++)
            {
                b = max(b, a[j] - j);
            }

            caves.push_back({b, k});
        }

        sort(caves.begin(), caves.end());
        auto isOk = [&](int mid)
        {
            int p = mid;
            bool f = true;
            for (auto it : caves)
            {
                if (p > it.first)
                {
                    p += it.second;
                }
                else
                {
                    f = false;
                    break;
                }
            }
            if (f)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        };
        int l = 1, r = 2e9;
        int answer = r;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isOk(mid) == 0)
            {
                l = mid + 1;
            }
            else
            {
                answer = mid;
                r = mid - 1;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}

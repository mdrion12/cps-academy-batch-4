
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int score = 0;
        for (auto it : mp)
        {
            int x = it.first;
            int xcnt = it.second;
            int rem = k - x;

            if (mp.count(rem))
            {
                if (x == rem)
                {
                    score += xcnt / 2;
                    mp[x] = 0;
                }
                else
                {
                    int ycnt = mp[rem];
                    score += min(xcnt, ycnt);
                    mp[x] = 0;   // Mark x as processed
                    mp[rem] = 0; // Mark rem as processed
                }
            }
        }
        cout << score << "\n";
    }

    return 0;
}

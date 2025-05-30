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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(b[i] - a[i]); 
        }

        sort(ans.begin(), ans.end());

        int l = 0, r = n - 1;
        int sum = 0;

        while (l < r)
        {
            if (ans[l] + ans[r] >= 0)
            {
                sum++;
                l++;
                r--;
            }
            else
            {
                l++;
            }
        }

        cout << sum << "\n";
    }

    return 0;
}

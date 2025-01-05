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
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        priority_queue<ll, vector<ll>, greater<ll>> minHeap;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll sum = a[i] + b[j];

                if (minHeap.size() < k)
                {
                    minHeap.push(sum);
                }
                else if (sum > minHeap.top())
                {
                    minHeap.pop();
                    minHeap.push(sum);
                }
                else
                {

                    break;
                }
            }
        }

        vector<ll> result;
        while (!minHeap.empty())
        {
            result.push_back(minHeap.top());
            minHeap.pop();
        }

        reverse(result.begin(), result.end());
        for (ll val : result)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}

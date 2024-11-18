#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> ans;
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int w;
        cin >> w;
        v[i] = {w, i};
    }

    string s;
    cin >> s;
    sort(v.begin() + 1, v.end());
    int k = 1;
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            pq.push(v[k]);
            ans.push_back(v[k].second);
            k++;
                }
        else
        {
            if (!pq.empty())
            {
                pair<int, int> x = pq.top();
                pq.pop();
                ans.push_back(x.second);
            }
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}

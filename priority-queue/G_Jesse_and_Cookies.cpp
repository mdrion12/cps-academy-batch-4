#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    int a, k;
    cin >> a >> k;
    vector<ll> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        pq.push(v[i]);
    }

    ll count = 0;
    while (pq.size() > 1 && pq.top() < k)
    {
        ll v1 = pq.top();
        pq.pop();
        ll v2 = pq.top();
        pq.pop();
        pq.push(v1 + (v2 * 2));
        count++;
    }

    if (pq.top() >= k)
    {
        cout << count << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int v[200009];
int res[200009];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    vector<pair<int, int>> p;
    int mx = INT_MIN, mn = INT_MAX;
    memset(v, 0, sizeof(v));
    memset(res, 0, sizeof(res));
    for (int i = 0; i < a; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x] += 1;
        v[y + 1] -= 1;
    }
    for (int i = 1; i <= 200009; i++)
    {
        v[i] = v[i] + v[i - 1];
    }
    int k = 0;
    for (int i = 1; i <= 200009; i++)
    {
        if (v[i] >= b)
        {
            k++;
            res[i] = k;
        }
        else
        {
            res[i] = k;
        }
    }
    // for (int i = 1; i <= 200009; i++)
    // {
    //     cout << res[i] << " ";
    // }
    while (c--)
    {
        int m, n;
        cin >> m >> n;
        int value = res[n] - res[m - 1];
        cout << value << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (y[i] == 1)
        {
            sum += x[i];
        }
    }
    int l = 0;
    ll sum1 = 0;
    ll sm = 0;
    int r = l;
    while (r < n)
    {
        if (y[r] == 0)
        {
            sm += x[r];
        }
        if (r - l + 1 == k)
        {
            sum1 = max(sm, sum1);
            if (y[l] == 0)
            {
                sm -= x[l];
            }
            l++;
        }

        r++;
    }
    sum += sum1;
    cout << sum << "\n";

    return 0;
}
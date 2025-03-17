#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<int> v(t + 1);
    for (int i = 1; i <= t; i++)
    {
        cin >> v[i];
    }
    int l = 1, r = t;
    int count = 1;
    int srejon = 0, dima = 0;
    while (l <= r)
    {
        if (v[l] > v[r])
        {
            if (count % 2 == 1)
            {
                srejon += v[l];
            }
            else
            {
                dima += v[l];
            }
            // cout << count << " " << v[l] << "\n";
            l++;
        }
        else if (v[l] < v[r])
        {
            if (count % 2 == 1)
            {
                srejon += v[r];
            }
            else
            {
                dima += v[r];
            }
            // cout << count << " " << v[r] << "\n";
            r--;
        }
        else if (v[l] == v[r])
        {
            if (count % 2 == 1)
            {
                srejon += v[l];
            }
            else
            {
                dima += v[l];
            }
            // cout << count << " " << v[l] << "\n";
            l++;
        }
        count++;
    }
    cout << srejon << " " << dima << "\n";

    return 0;
}
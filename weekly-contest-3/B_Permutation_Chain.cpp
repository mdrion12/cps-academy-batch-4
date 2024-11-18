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
        vector<int> v;
        int a;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            v.push_back(i);
        }
        cout << a << "\n";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        int sz = a - 1;
        while (sz)
        {
            swap(v[sz], v[sz - 1]);
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
            sz--;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int v[t][2];

    for (int i = 0; i < t; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }

    for (int i = 0; i < t; i++)
    {
        if (v[i][0] != v[i][1])
        {
            cout << "rated" << "\n";
            return 0;
        }
    }

    for (int i = 1; i < t; i++)
    {
        if (v[i - 1][0] < v[i][0])
        {
            cout << "unrated" << "\n";
            return 0;
        }
    }

    cout << "maybe" << "\n";
    return 0;
}

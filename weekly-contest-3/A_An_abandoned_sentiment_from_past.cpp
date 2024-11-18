#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    vector<int> v(a), x(b);

    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> x[i];
    }

    if (b > 1)
    {
        cout << "Yes" << "\n";
        return 0;
    }

    if (b == 1)
    {

        for (int i = 0; i < a; i++)
        {
            if (v[i] == 0)
            {
                v[i] = x[0];
                break;
            }
        }

        bool isIncreasing = true;
        for (int i = 0; i < a - 1; i++)
        {
            if (v[i] >= v[i + 1])
            {
                isIncreasing = false;
                break;
            }
        }

        if (isIncreasing)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}

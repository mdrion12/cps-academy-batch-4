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
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    double avg = (double)(sum) / n;
    if (round(avg) == k)
    {
        cout << 0 << "\n";
    }
    else
    {
        int i = 1;
        while (true)
        {
            avg = (double)(sum + k * i) / (n + i);
            if (round(avg) == k)
            {
                cout << i << "\n";
                break;
            }
            i++;
        }
    }

    return 0;
}

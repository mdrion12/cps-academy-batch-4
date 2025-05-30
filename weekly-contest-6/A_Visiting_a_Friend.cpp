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
    bool arr[b + 1] = {false};
    int prev = 0;
    for (int i = 0; i < a; i++)
    {
        int x, y;
        cin >> x >> y;
        if (prev >= x)
        {
            for (int i = x; i <= y; i++)
            {
                arr[i] = true;
            }
            prev = max(prev, y);
        }
    }
    bool f = true;
    for (int i = 0; i <= b; i++)
    {
        if (arr[i] != true)
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
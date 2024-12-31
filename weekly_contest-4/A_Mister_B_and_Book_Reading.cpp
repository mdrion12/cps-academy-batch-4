#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;

    ll sum = 0;
    int days = 0;

    while (sum < c)
    {

        int daily_speed = min(v0 + a * days, v1);
        sum += daily_speed;

        days++;

        if (sum >= c)
            break;

        sum -= l;
    }

    cout << days << "\n";
    return 0;
}

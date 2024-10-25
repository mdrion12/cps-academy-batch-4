#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, d;
    cin >> r >> d;
    int t;
    cin >> t;
    int count = 0;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        double dist = sqrt(pow(a, 2) + pow(b, 2));

        if (dist - c >= (r - d) && dist + c <= r)
        {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int px = 0;
        int nx = 0;
        int py = 0;
        int ny = 0;

        while (n--)
        {
            int a, b;
            cin >> a >> b;

            if (b == 0)
            {
                if (a > 0)
                {

                    px = max(px, a);
                }
                else
                {

                    nx = min(nx, a);
                }
            }

            else if (a == 0)
            {
                if (b > 0)
                {

                    py = max(py, b);
                }
                else
                {

                    ny = min(ny, b);
                }
            }
        }

        int res = 2 * (abs(px) + abs(nx) + abs(py) + abs(ny));
        cout << res << "\n";
    }
    return 0;
}

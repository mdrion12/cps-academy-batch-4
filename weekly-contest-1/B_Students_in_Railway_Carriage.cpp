#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int count = 0; // Total students seated
    int i = 0;

    while (i < n)
    {

        if (s[i] == '.')
        {
            int len = 0;
            while (i < n && s[i] == '.')
            {
                len++;
                i++;
            }

            if (len % 2 == 0)
            {
                int canSeatA = min(a, len / 2);
                int canSeatB = min(b, len / 2);
                count += canSeatA + canSeatB;
                a -= canSeatA;
                b -= canSeatB;
            }
            else
            {
                if (a > b)
                {
                    int canSeatA = min(a, (len + 1) / 2);
                    int canSeatB = min(b, len / 2);
                    count += canSeatA + canSeatB;
                    a -= canSeatA;
                    b -= canSeatB;
                }
                else
                {
                    int canSeatB = min(b, (len + 1) / 2);
                    int canSeatA = min(a, len / 2);
                    count += canSeatB + canSeatA;
                    b -= canSeatB;
                    a -= canSeatA;
                }
            }
        }
        else
        {
            i++;
        }
    }

    cout << count << "\n";
    return 0;
}
